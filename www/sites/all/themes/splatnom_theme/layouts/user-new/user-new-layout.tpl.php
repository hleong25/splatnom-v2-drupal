<?php
/*

*/

$user_style = array(
    'login' => '',
    'register' => '',
    'password' => '',
);

if (arg(0) == 'user') {
    switch (arg(1)) {
        case NULL:
            $user_style['login'] = 'active';
            break;
        case 'register':
            $user_style['register'] = 'active';
            break;
        case 'password':
            $user_style['password'] = 'active';
            break;
        case 'login':
            $user_style['login'] = 'active';
            break;
    }
}

?>
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
      <ul class="tabs tabs--primary links--inline">
        <li class="<?php print $user_style['register']; ?>"><a class="<?php print $user_style['register']; ?>" href="/user/register">Create new account</a></li>
        <li class="<?php print $user_style['login']; ?>"><a class="<?php print $user_style['login']; ?>" href="/user">Log in</a></li>
        <li class="<?php print $user_style['password']; ?>"><a class="<?php print $user_style['password'];  ?>" href="/user/password">Request new password</a></li>
      </ul>
     <?php print render($page['content']); ?>
    </div>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
</div>
