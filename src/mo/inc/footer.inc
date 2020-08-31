<!-- gnb(menu) -->
<div class="gnb_menu">
	<div class="gnb_head">
		<div class="row">
			<!-- 파트너사 로그인 전 -->
			<!-- <a href="#" class="btn_link _login">파트너사 로그인</a> -->
			<!--// 파트너사 로그인 전 -->

			<!-- 파트너사 로그인 후 -->
			<p>현재 <span>Parter_01Parter_01</span> 로 로그인하셨습니다.</p>
			<a href="#" class="btn_link _modi">정보수정</a>
			<!--// 파트너사 로그인 후 -->

			<a href="#" class="btn btn_close"><span class="a11y">close</span></a>
		</div>
	</div>
	<div class="tab_wrap gnb_wrap">
		<!-- 일반사용자 메뉴 -->
		<!-- <ul class="tablist" role="tablist">
			<li><button class="current" data-tab="gnb-1">프로페셔널</button></li>
			<li><button class="" data-tab="gnb-2">브랜드</button></li>
			<li><button class="" data-tab="gnb-3">제품</button></li>
			<li><button class="" data-tab="gnb-4">솔루션</button></li>
		</ul> -->
		<!-- 파트너사 메뉴 -->
		<ul class="tablist" role="tablist">
			<li><button class="current" data-tab="part_gnb-1">파트너정보</button></li>
			<li><button class="" data-tab="part_gnb-2">주문신청</button></li>
			<li><button class="" data-tab="part_gnb-3">커뮤니티</button></li>
			<li><button class="" data-tab="gnb-1">프로페셔널</button></li>
			<li><button class="" data-tab="gnb-2">브랜드</button></li>
			<li><button class="" data-tab="gnb-3">제품</button></li>
			<li><button class="" data-tab="gnb-4">솔루션</button></li>
			<li><button class="" data-tab="gnb-5">현장혁신정보</button></li>
			<li><button class="" data-tab="gnb-6">고객서비스</button></li>
		</ul>
		<div class="tab_contents">
			<div id="part_gnb-1" class="tab-cont current">

			</div>
		</div>
		
	</div>
</div>
<!--// gnb(menu) -->


<!-- search layer -->
<div class="search_layer">
	<div class="dim"></div>
	<div class="search_wrap">
		<div class="row">
			<button class="btn btn_down" onclick="searchlayer();"><span class="a11y">close</span></button>
			<div class="search_frm-input">
				<div>
					<input type="text" value="" placeholder="제품명을 입력하세요.">
					<button class="btn btn_search" onclick="location.href='/kcp/mo/html/professional/search.html'"><span class="a11y">search</span></button>

					<a href="#" class="btn btn_reset"><span class="a11y">reset</span></a>
				</div>
			</div>
			<div class="recom_tag">
				<p>추천 검색어</p>
				<ul>
					<li><a href="#"><p class="num">1</p><p>추천검색어입니다</p></a></li>
					<li><a href="#"><p class="num">2</p><p>스카트<span>스카트폴드 타올</span></p></a></li>
					<li><a href="#"><p class="num">3</p><p>추천검색어입니다 얼마만큼 넣어야하나요</p></a></li>
					<li><a href="#"><p class="num">4</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">5</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">6</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">7</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">8</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">9</p><p>크리넥스<span>미용티슈</span></p></a></li>
					<li><a href="#"><p class="num">10</p><p>와이프올<span>다목적 흡착제</span></p></a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
<!--// search layer -->

<!-- fixed menu -->
<div class="fixed_menu">
  <div class="row">
    <p class="menu mn01"><a href="#"><span>홈</span></a></p>
    <p class="menu mn02"><a href="#"><span>카테고리</span></a></p>
    <p class="menu mn03"><a href="#" onclick="searchlayer();return false;"><span>검색</span></a></p>
    <p class="menu mn04"><a href="#"><span>고객문의</span></a></p>
  </div>
</div>
<!--// fixed menu -->

<footer class="footer">
	<div class="row">
		<ul class="util">
			<li><a href="#">사이트이용약관</a></li>
			<li><a href="#" class="point">개인정보처리방침</a></li>
			<li><a href="#">사이트맵</a></li>
		</ul>

		<div class="cs">
			<div>
				<p>구입문의</p>
				<a href="tel:1588-5332" class="tel">1588-5332</a>
			</div>
			<div>
				<a href="#" class="btn-cust">구매상담</a>
			</div>
		</div>

		<div class="familysite">
			<select onchange="goFamilySite(this);">
				<option>Familysite</option>
				<option value="http://www.goldenfriends.yuhan-kimberly.co.kr/">골든프렌즈</option>
				<option value="http://www.yuhan-kimberly.co.kr/">유한킴벌리</option>
				<option value="https://www.momq.co.kr/">하기스</option>
				<option value="http://www.ykbrand.co.kr/white">화이트</option>
				<option value="http://www.ykbrand.co.kr/goodfeel">좋은느낌</option>
				<option value="http://www.ykbrand.co.kr/depend">디펜드</option>
				<option value="http://www.ykbrand.co.kr/scott">스카트</option>
				<option value="http://www.ykbrand.co.kr/mybidet">마이비데</option>
			</select>
		</div>

		<div class="addr">
			<p><span>대표자 : 최규복</span><span>사업자번호 : 120-81-11436</span></p>
			<p><span>이메일 :  official@yk-proffesional.com</span></p>
			<p><span>팩스 : 02-528-3467</span></p>
			<p><span>주소 : 서울특별시 강남구 테헤란로 504</span></p>
		</div>
	</div>
	<div class="copyr">
		<p>ⓡ/* 표는 미국 킴벌리-크라크 월드와이드의 세계적인 등록상표 및 상표입니다.</p>
		<p>ⓡ/* Trademarks of Limberly-Clark Worldwide, Inc.</p>
		<p>©2013 Kimberly-Clark Worldwide Inc.<br>All Right Reserved.</p>
	</div>
</footer>
<script type="text/javascript" src="@@webroot2/assets/js/ui.js"></script>
