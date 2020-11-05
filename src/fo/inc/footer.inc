<!-- 구매문의 -->
<div class="cust_inquiry">
	<div class="door"><a href="#" onclick="inquiryDoor();return false;" class="btn_door"><i></i><span class="a11y">button</span></a></div>
	<div class="head">
		<div>
			<p class="title">구매문의</p>
			<span>제품 구매문의를 하시면 원하시는<br>시간에 담당자가 친절하게<br>상담해드립니다.</span>
		</div>
	</div>

	<!-- 11.06 : 입력필드 순서변경 및 날짜선택 수정 -->
	<div class="mid">
		<h4>구매 문의</h4>
		<p class="title">유한킴벌리 프로페셔널 제품구매를 원하시는 고객님은 구매문의를 해주시면<br>담당자가 연락하여 상세하게 안내해 드립니다.</p>
		<div class="chkwrap">
			<input type="checkbox" id="ckagr"><label for="ckagr">개인정보 수집 및 이용에 동의합니다.</label>
			<a href="#" class="btn_more">보기 <i></i></a>
		</div>
		<dl class="frm_group">
			<dt><label for="frm1">문의제품 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd>
				<input type="text" id="frm1" value="" placeholder="문의하실 제품명 또는 제품군을 입력해주세요.">
			</dd>
		</dl>
		<dl class="frm_group">
			<dt><label for="frm3">담당자명 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd>
				<input type="text" id="frm3" value="" >
			</dd>
		</dl>
		<dl class="frm_group">
			<dt><label for="frm2">기업정보 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd>
				<input type="text" id="frm2" value="" placeholder="기업명을 입력해주세요.">
			</dd>
		</dl>
		<dl class="frm_group">
			<dt><label for="frm6">업종 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd class="mix">
				<select>
					<option value="">선택</option>
					<option value="">업종</option>
				</select>
				<input type="text" id="frm6" value="" required>
			</dd>
		</dl>
		<dl class="frm_group">
			<dt><label for="frm7">답변형식</label></dt>
			<dd class="radiowrap">
				<input type="radio" id="rd01" name="radio"><label for="rd01">전화답변</label>
				<input type="radio" id="rd02" name="radio"><label for="rd02">이메일답변</label>
			</dd>
		</dl>
		
		<!-- 이메일 답변 선택할 경우 -->
		<dl class="frm_group">
			<dt><label for="frm4">이메일 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd class="mix">
				<input type="text" id="frm4" value="" placeholder="이메일입력" required>
				<span>@</span>
				<input type="text" placeholder="" required>
				<select>
					<option value="">이메일 선택</option>
					<option value="">gmail.com</option>
				</select>
			</dd>
		</dl>
		<!--// 이메일 답변 선택할 경우 -->

		<!-- 전화답변 선택할 경우 -->
		<dl class="frm_group">
			<dt><label for="frm5">휴대폰번호 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd>
				<input type="text" id="frm5" value="" placeholder="-를 제외한 숫자만 입력해주세요." required>
			</dd>
		</dl>
		<dl class="frm_group">
			<dt><label for="frm7">희망답변일시 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd class="mix">
				<input type="text" class="datepicker" placeholder="날짜를 선택해주세요." readonly>
				<!-- <select>
					<option value="">월 선택</option>
					<option value="">12월</option>
				</select>
				<select>
					<option value="">일 선택</option>
					<option value="">12일</option>
				</select> -->
				<select>
					<option value="">시간 선택</option>
					<option value="">09~10</option>
				</select>
			</dd>
		</dl>
		<!--// 전화답변 선택할 경우 -->
		
		<dl class="frm_group">
			<dt><label for="frm8">내용 <span class="required"><span class="a11y">필수</span></span></label></dt>
			<dd>
				<textarea></textarea>
			</dd>
		</dl>
		<div class="btn_wrap">
			<a href="#" class="btn max cancel">취소</a>
			<a href="#" class="btn max primary">구매문의하기</a>
		</div>
	</div> 
	<!--// 11.06 : 입력필드 순서변경 및 날짜선택 수정 -->

	<div class="etc">
		<div class="top_util">
			<div class="weather"> <!-- 날씨 디자인 미정 //-->
				<p>미세먼지 <span>보통</span><img src="@@webroot2/assets/images/dummy/@weather.png" alt="미세먼지 보통" /></p>
			</div>
			<button onclick="searchcomPop();" class="btn_search"><span class="a11y">검색</span></button>
		</div>
		<dl class="cust_call">
			<dt>상담전화</dt>
			<dd><a class="tel" href="tel:1588-5332">1588-5332</a></dd>
			<dd>
				<p>평일: 09:00 ~ 17:30</p>
				<p>토, 일요일 및 공유일 휴무</p>
			</dd>
		</dl>
	</div>
</div>
<!--// 구매문의 -->

<!-- 검색영역 -->
<div class="search_wrap">
	<button onclick="searchPopclose();" class="btn_close"><span class="a11y">close</span></button>
	<div class="row">
		<p class="title">Search</p>
		<div class="frm">
			<input type="text" placeholder="제품명을 입력해주세요">
			<a href="#" onclick="searchPopclose();" class="btn_search"><i></i><span class="a11y">검색</span></a>
		</div>
		<div class="recom_keyword">
			<p>추천검색어</p>
			<div>
				<ul class="item">
					<li><a href="#"><em>1</em> 크리넥스 드라이셀 R170크리넥스 드라이셀 R170크리넥스 드라이셀 R170</a></li>
					<li><a href="#"><em>2</em> 스카트 스카트폴드 타올</a></li>
					<li><a href="#"><em>3</em> 크리넥스 미용티슈</a></li>
					<li><a href="#"><em>4</em> 크린가드 M10</a></li>
					<li><a href="#"><em>5</em> 와이프올 다목적 흡착제</a></li>
				</ul>
				<ul class="item">
					<li><a href="#"><em>6</em> 스카트 스카트폴드 타올</a></li>
					<li><a href="#"><em>7</em> 크리넥스 미용티슈</a></li>
					<li><a href="#"><em>8</em> 크린가드 M10</a></li>
					<li><a href="#"><em>9</em> 와이프올 다목적 흡착제</a></li>
					<li><a href="#"><em>10</em> 크리넥스 드라이셀 R170</a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
<!--// 검색영역 -->

<!-- 공통 : 구매문의/검색 플로팅 버튼  -->
<div class="skybanner">
	<a href="#" onclick="searchcomPop();return false;" class="btn_search"><i></i><span class="a11y">검색</span></a>
	<a href="#" onclick="inquiryDoor();return false;" class="btn_inquiry"><span>구매문의</span></a>
</div>
<!--// 공통 : 구매문의/검색 플로팅 버튼  -->

<footer class="footer">
	<!-- 메인에서만 노출되는 영역 -->
	<div class="main_service">
		<div class="row">
			<div class="mailling">
				<h3>메일링 서비스 신청</h3>
				<p>메일링 서비스를 신청하시면 유한킴벌리 프로페셔널의 다양한 소식을 받아보실 수 있습니다.</p>
				<div class="frm">
					<input type="text">
					<span class="dot">@</span>
					<input type="text" placeholder="직접입력">
					<select>
						<option>이메일 선택</option>
						<option></option>
					</select>

					<a href="#" class="btn default">신청</a>
				</div>
			</div>
			<div class="social">
				<a href="#">유한킴벌리 프로페셔널<br><span>카카오톡 플러스<br>친구 추가하기</span></a>
			</div>
		</div>
	</div>
	<!--// 메인에서만 노출되는 영역 -->
	<div class="row">
		<ul class="col util">
			<li><a href="#">사이트이용약관</a></li>
			<li><a href="#" class="point">개인정보처리방침</a></li>
			<li><a href="#">사이트맵</a></li>
		</ul>

		<div class="col addr">
			<p><span>대표자 : 최규복</span></p>
			<p><span>사업자번호 : 120-81-11436</span></p>
			<p><span>이메일 :  official@yk-proffesional.com</span></p>
			<p><span>팩스 : 02-528-3467</span></p>
			<p><span>주소 : 서울특별시 강남구 테헤란로 504</span></p>
		</div>

		<div class="col cs">
			<div>
				<p>구입문의</p>
				<a href="tel:1588-5332" class="tel">1588-5332</a>
			</div>
			<div>
				<a href="#" class="btn-cust">구매문의</a>
			</div>
		</div>

		<div class="col familysite">
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
	</div>
	<div class="copyr">
		<p>ⓡ/* 표는 미국 킴벌리-크라크 월드와이드의 세계적인 등록상표 및 상표입니다.</p>
		<p>ⓡ/* Trademarks of Limberly-Clark Worldwide, Inc. ©2013 Kimberly-Clark Worldwide Inc. All Right Reserved.</p>
	</div>
</footer>
<script type="text/javascript" src="@@webroot2/assets/js/ui.js"></script>
