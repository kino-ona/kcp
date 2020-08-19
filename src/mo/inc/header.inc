
<header class="header @@headtype">
	<div class="row">
		<h1 class="logo"><a href="#"><span class="a11y">유한킴벌리 프로페셔널</span></a></h1>
		<div class="head">
			<a href="#" class="btn btn_back"><span class="a11y">preview page</span></a>
			@@if (headtype === 'subhead') {
				<h2>@@pagetitle</h2>
			}
			@@if (headtype === 'subhead _logo') {
				<!-- 브랜드 로고에 따른 클래스명 정의
					* 크리넥스: kleenex
				-->
				<h2 class="kleenex"><span class="a11y">@@pagetitle</span></h2>
			} 
		</div>
	</div>
</header>
