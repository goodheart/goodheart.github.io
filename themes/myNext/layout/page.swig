{% extends '_layout.swig' %}
{% import '_macro/sidebar.swig' as sidebar_template %}

{% block title %}
  {% set page_title_suffix = ' | ' + config.title %}

  {% if page.type === "categories" %}
    {{ __('title.category') + page_title_suffix }}
  {% elif page.type === "tags" %}
    {{ __('title.tag') + page_title_suffix }}
  {% else %}
    {{ page.title + page_title_suffix }}
  {% endif %}
{% endblock %}

{% block content %}

  <div id="posts" class="posts-expand">
    {# tagcloud page support #}
    {% if page.type === "tags" %}
      <div class="tag-cloud">
        <div class="tag-cloud-title">
            {{ _p('counter.tag_cloud', site.tags.length) }}
        </div>
        <div class="tag-cloud-tags">
          {{ tagcloud({min_font: 12, max_font: 30, amount: 200, color: true, start_color: '#ccc', end_color: '#111'}) }}
        </div>
      </div>
    {% elif page.type === 'categories' %}
      <div class="category-all-page">
        <div class="category-all-title">
            {{ _p('counter.categories', site.categories.length) }}
        </div>
        <div class="category-all">
          {{ list_categories() }}
        </div>
      </div>
    {% else %}
      {{ page.content }}
    {% endif %}
        <% if (page.comments ){ %>
        <section id="comment">
        <!-- 多说评论框 start -->
        <div id="ds-thread" class="ds-thread" data-thread-key="<%= page.path %>" data-title="<%= page.title %>" data-url="<%= page.permalink %>"></div>
        <!-- 多说评论框 end -->
        <!-- 多说公共JS代码 start (一个网页只需插入一次) -->
        <script type="text/javascript">
        var duoshuoQuery = {short_name:"datoublog"};
        true(function() {
        truetruevar ds = document.createElement('script');
        truetrueds.type = 'text/javascript';ds.async = true;
        truetrueds.src = (document.location.protocol == 'https:' ? 'https:' : 'http:') + '//static.duoshuo.com/embed.js';
        truetrueds.charset = 'UTF-8';
        truetrue(document.getElementsByTagName('head')[0]
        truetrue || document.getElementsByTagName('body')[0]).appendChild(ds);
        true})();
        true</script>
        <!-- 多说公共JS代码 end -->
        </section>
        <% } %>
  </div>

{% endblock %}

{% block sidebar %}
  {{ sidebar_template.render(false) }}
{% endblock %}
{% block comment_system %}
{% include '_scripts/comments/duoshuo.swig' %}
{% include '_scripts/comments/disqus.swig' %}
{% endblock %}
