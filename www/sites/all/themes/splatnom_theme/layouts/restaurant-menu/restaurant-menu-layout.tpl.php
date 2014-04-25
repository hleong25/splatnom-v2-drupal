<div class="l-page">
  <header class="l-header" role="banner">
    <div class="header-content">
        <div class="header-left">
            <a href="/"><div class="header-logo"></div></a>
            <?php print render($page['header_left']); ?>
        </div>
        <div class="header-right">
            <?php print render($page['header_right']); ?>
        </div>
    </div>
  </header>

  <div class="l-main">
    <div class="l-sidebar" role="main">
      <?php print render($page['sidebar']); ?>
    </div>
    <div class="l-content" role="main">
      <?php print render($page['content']); ?>
    </div>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
