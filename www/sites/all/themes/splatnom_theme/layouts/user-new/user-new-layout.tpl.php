<div class="l-page">
  <header class="l-header" role="banner">
    <div class="header-content">
        <div class="header-left">
            <?php print render($page['header_left']); ?>
        </div>
        <div class="header-right">
            <?php print render($page['header_right']); ?>
        </div>
    </div>
  </header>

  <div class="l-main">
    <div class="l-content" role="main">
      <a href="/user/register">Create new account</a>
      <a href="/user">Log in</a>
      <a href="/user/password">Request new password</a>
      <?php print render($page['content']); ?>
    </div>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>