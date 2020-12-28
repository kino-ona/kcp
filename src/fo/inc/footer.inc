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

<!--  개인정보 수집 및 이용 동의 popup -->
<div class="layer_body layer_full agreepopup" id="agreepopup" aria-hidden="true" role="dialog">
		<div class="layer_wrap">
			<div class="layer_head">
				<button onclick="layerClose('agreepopup')" class="layer_close manualfn">닫기</button>
				<h2 class="layer_title">개인정보 수집 및 이용 동의</h2>
			</div>
			<div class="layer_cont">
				<div class="agr_text">
					<dl>
						<dt>개인정보의 수집 및 이용 목적</dt>
						<dd class="light">회사는 제품 상담, 서비스 신청 등등을 위해 아래와 같은 개인정보를 수집하고 있습니다.</dd>
						<dd>
							- 수집항목 : 성명, 전화번호(유선/핸드폰 고객 선택), 주소, 이메일, 회사명, 접속 IP 정보<br>
							- 개인정보 수집방법 : 홈페이지(응신엽서, 구매상담)
						</dd>
					</dl>
					<dl>
						<dt>개인정보의 수집 및 이용 목적</dt>
						<dd class="light">회사는 수집한 개인정보를 다음의 목적을 위해 활용합니다.</dd>
						<dd>
							- 고객 상담 및 원활한 의사 소통을 위한 경로 확보<br>
							- 자료 제공 및 상품 배송등의 서비스 이행을 위한 정보 수집<br>
							- Target Marketing 및 무료 샘플링 등 개인 맞춤 서비스 제공
						</dd>
					</dl>
					<dl>
						<dt>개인정보의 보유 및 이용 기간</dt>
						<dd class="light">원칙적으로, 개인정보 수집 및 이용목적이 달성된 후에는 해당 정보를 지체 없이 파기합니다.</dd>
						<dd>
							귀하께서 제공한 정보는 내부 규정에 따라 그 보존기간을 5년으로 하고 있으며, 이용자의 요청에 의해 삭제될 수 있습니다.<br><br>
							자세한 내용은 개인정보 취급방침을 확인해 보시기 바랍니다.<br><br>
							- 보존항목 : 성명, 전화번호(유선/핸드폰 고객 선택), 주소, 이메일, 회사명, 접속 IP 정보<br>
							- 보존근거 : 회사 자료보존 방침에 의거<br>
							그리고 관계법령의 규정에 의하여 보존할 필요가 있는 경우 회사는 아래와 같이 관계법령에서 정한 일정한 기간 동안 회원정보를 보관합니다.<br>
							소비자의 불만 또는 분쟁처리에 관한 기록 : 3년 (전자상거래등에서의소비자보호에 관한 법률)
						</dd>
					</dl>
				</div>
			</div>
		</div>
	</div>
	<!--//  개인정보 수집 및 이용 동의 popup -->

<!-- 11.24 사이트이용약관 -->
<div class="layer_body termspop" id="termspop" aria-hidden="true" role="dialog">
	<div class="layer_wrap">
		<div class="layer_head">
			<button onclick="layerClose('termspop')" class="layer_close manualfn">닫기</button>
			<h2 class="layer_title">사이트이용약관</h2>
		</div>
		<div class="layer_cont">
		<!-- 11.30v4 -->	
		<div class="terms_area">
			<dl>
				<dt>제1조 목적</dt>
				<dd>이 약관은 유한킴벌리 주식회사(이하 “회사”)가 제공하는 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com) 및 관련 온라인 서비스(이하 &quot;서비스&quot;라 합니다)를 이용함에 있어 회사와 이용자와의 권리, 의무, 책임사항, 관련절차 등을 규정함을 목적으로 합니다.</dd>
			</dl>
			<dl>
				<dt>제2조 정의</dt>
				<dd>이 약관에서 사용하는 용어의 정의는 다음과 같습니다.</dd>
				<dd>
				1. 이용자 : 이 약관에 따라 서비스를 이용하는 회원 및 비회원<br>
				2. 회원 : 회사와 대리점거래계약을 체결하고 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com)의 아이디와 비밀번호를 부여 받은 이용자 (대리점)<br>
				3. 아이디(ID) : 회원의 식별과 서비스 이용을 위하여 사용되는 문자와 숫자의 조합<br>
				4. 비밀번호 : 회원이 부여 받은 아이디와 일치된 회원임을 확인하고 회원의 개인정보를 보호하기 위하여 사용되는 문자와 숫자의 조합<br>
				5. 운영자 : 서비스의 전반적인 관리와 원활한 운영을 위하여 회사에서 선정한 사람
				</dd>
				<dd>이 약관에서 사용하는 용어 중 본 조에서 정하지 아니한 것은 유한킴벌리 SSO회원 이용약관, 통합브랜드 이용약관, 관계 법령 또는 상관례에서 정하는 바에 따릅니다.</dd>
			</dl>
			<dl>
				<dt>제3조 약관의 게시와 개정</dt>
				<dd>
				<p>① 회사는 이 약관의 내용을 이용자가 쉽게 알 수 있도록 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com) 내에 게시합니다.</p>
				<p>② 회사는 ‘약관의 규제 등에 관한 법률’, ‘정보통신망 이용촉진 및 정보보호 등에 관한 법률’ 등 관계 법령을 위배하지 않는 범위에서 이 약관을 개정할 수 있습니다.</p>
				<p>③ 회사가 약관을 개정할 경우에는 적용일자 및 개정내용, 개정사유를 명시하여 그 적용일자로부터 최소한 7일 이전(이용자에게 불리하거나 중대한 사항의 변경은 30일 이전)부터 일정기간 공지하고, 기존 회원에게는 SMS, 전자우편, 로그인 시 동의 창, 초기화면 등의 전자적 수단을 통해 고지합니다.</p>
				<p>④ 회사가 전 항에 따라 약관을 개정할 경우에는 기존약관과 개정약관을 공지 또는 통지하면서 이용자에게 적용일 전까지 의사표시를 하지 않으면 변경에 동의한 것으로 본다는 뜻을 명확하게 공지 또는 통지하였음에도 이용자가 명시적으로 거부의 의사표시를 하지 아니한 경우, 이용자가 개정 약관에 동의한 것으로 봅니다.</p>
				<p>⑤ 이용자가 개정 약관의 적용에 동의하지 않으면 회사는 해당 이용자에 대해 개정 약관의 내용을 적용할 수 없으며, 이 경우 회사는 해당 이용자에게 개정된 약관에 따른 서비스를 제한할 수 있습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제4조 약관 외 준칙</dt>
				<dd>
				<p>① 이 약관에서 명시되지 않은 사항은 유한킴벌리 SSO회원 이용약관, 통합브랜드 이용약관 및 &#39;전기통신기본법&#39;, &#39;전기통신사업법&#39;, &#39;정보통신망 이용촉진 및 정보보호 등에 관한 법률&#39; 등 관계 법령 또는 상관례에서 정하는 바에의 따릅니다.</p>
				<p>② 이 약관과 관련하여 회사의 정책 변경, 법령의 제/개정 또는 공공기관의 고시나 지침 등에 의하여 회사가 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com)의 공지사항, 게시판 등을 통해 공지하는 내용 역시 서비스 이용과 관련하여 회사 및 이용자에게 적용됩니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제5조 회원의 가입</dt>
				<dd>회사는 회사와 대리점거래계약을 체결한 대리점에 대하여 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com)의 아이디(ID)와 비밀번호를 부여하고, 회원가입은 대리점이 최초 로그인시 이 약관에 동의하고 부여받은 비밀번호를 수정함으로써 성립합니다.</dd>
			</dl>
			<dl>
				<dt>제6조 회원정보의 변경</dt>
				<dd>
				<p>① 회원은 회사가 부여한 아이디(ID)와 비밀번호를 변경할 수 있습니다.</p>
				<p>② 회원은 회사가 부여한 아이디(ID)와 비밀번호 이외 회원정보가 변경되었을 경우 회원정보 페이지에서 이를 변경해야 합니다.</p>
				<p>③ 회사가 부여한 아이디(ID)와 비밀번호 이외 회원정보가 잘못되었거나 변경되었음에도 해당 사항을 수정하지 않거나 해당 사항을 회사에 알리지 않아 발생한 각종 손해와 잘못된 수정으로 인하여 발생한 손해는 당해 회원이 부담하여야 하며, 회사는 이에 대하여 아무런 책임을 지지 않습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제7조 회원의 아이디(ID) 및 비밀번호의 관리에 대한 의무</dt>
				<dd>
				① 회원의 아이디(ID)와 비밀번호에 관한 관리책임은 회원에게 있으며, 이를 제3자가 이용하도록 하여서는 안 됩니다.
				<p>회원은 아이디(ID) 및 비밀번호가 도용되거나 제3자에 의해 사용되고 있음을 인지한 경우에는 이를 즉시 회사에 통지하고 회사의 안내에 따라야 합니다.</p>
				<p>전 항의 경우에 해당 회원이 회사에 그 사실을 통지하지 않거나, 통지한 경우에도 회사의 안내에 따르지 않아 발생한 불이익에 대하여 회사는 책임지지 않습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제8조 이용자의 의무</dt>
				<dd>
				<p>① 회원정보를 포함한 개인정보에 관한 관리책임은 이용자에게 있습니다. 이용자가 본인의 정보를 소홀히 관리하거나, 제3자에게 이용을 승낙함으로써 발생하는 손해에 대하여는 이용자에게 책임이 있습니다.</p>
				<p>② 이용자는 다음 각호의 행위를 하여서는 안됩니다.</p>
				<ul>
					<li>1. 허위내용의 등록</li>
					<li>2. 타인의 정보 도용 또는 타인의 서비스 이용 방해</li>
					<li>3. 회사의 서비스에 게시된 정보를 회사의 사전 승낙 없이 영리 또는 비영리 목적으로 복제, 출판, 방송 등에 사용하는 행위</li>
					<li>4. 자동 접속 프로그램 등을 사용하는 등 정상적인 용법과 다른 방법으로 서비스를 이용하여 회사의 서버에 부하를 일으켜 회사의 정상적인 활동을 방해할 현저한 우려가 있는 행위</li>
					<li>5. 회사가 제공하는 서비스를 이용하여 제3자에게 본인, 다른 제품이나 서비스를 홍보할 기회를 제공하거나 제3자의 홍보를 대행하는 등의 방법으로 금전을 수수하거나 서비스를 이용할 권리를 양도하고 이를 대가로 금전을 수수하는 등 영리를 목적으로 서비스를 이용하는 행위</li>
					<li>6. 회사 기타 제3자에 대한 진위가 불분명한 사실 또는 허위의 사실을 게재하거나, 회사 또는 제3자의 명예를 손상시키거나 업무를 방해하는 행위, 지적재산권을 침해하는 등 회사나 제3자의 권리를 침해하는 행위</li>
					<li>7. 외설 또는 폭력적인 메시지, 화상, 음성, 기타 공서양속에 반하는 정보를 공개 또는 게시하는 행위</li>
					<li>8. 서비스 이용 과정에서 회사 직원 등에 대한 모욕, 협박 또는 음란한 언행 등으로 서비스의 운영을 방해하는 경우</li>
					<li>9. 컴퓨터 소프트웨어, 하드웨어, 전기통신 장비의 정상적인 가동을 방해, 파괴할 목적으로 고안된 소프트웨어 바이러스, 기타 다른 컴퓨터 코드, 파일, 프로그램을 포함하고 있는 자료를 사용하는 행위</li>
					<li>10. 회사가 제공하는 소프트웨어 등을 개작하거나 리버스 엔지니어링, 디컴파일, 디스어셈블 하는 행위</li>
					<li>11. 현행 법령, 회사가 제공하는 서비스에 정한 약관 기타 서비스 이용에 관한 규정을 위반하는 행위</li>
					<li>12. 회사의 직원이나 운영자를 가장하거나 사칭하여 또는 타인의 명의를 도용하여 글을 게시하거나 메일을 발송하는 행위</li>
					<li>13. 국익 또는 사회적 공익을 저해할 목적으로 서비스를 이용하는 경우</li>
					<li>14. 기타 불법적이거나 부당한 행위</li>
				</ul>
				<p>③ 이용자는 회사가 제공하는 서비스를 이 약관, 운영정책 및 회사가 설정한 규칙에 따라 이용할 수 있습니다. 이용자는 관계 법령, 이 약관의 규정, 이용안내 및 서비스와 관련하여 공지한 주의사항, 회사가 통지하는 사항 등을 준수하여야 하며, 기타 회사의 업무에 방해되는 행위를 하여서는 안 됩니다.</p>
				<p>④ 회사는 이용자의 이 약관에 따른 의무 위반에 대한 모니터링을 실시하고 있으며, 이용자는 회사가 합리적인 범위 내에서 요청하는 필요 최소한의 증빙자료를 제출하는 등 이에 협조할 의무가 있습니다.</p>	
				<p>⑤ 이용자가 본 조 제2항의 행위를 하는 경우 회사는 사전통지 없이 서비스의 이용을 제한하거나, 회원인 경우 회원자격의 제한 또는 정지 등의 조치를 취할 수 있습니다.</p>
				<p>회사가 회원 자격을 제한 또는 정지한 후, 동일한 행위가 반복되거나 30일 내에 그 사유가 시정되지 아니하는 경우 회사는 회원자격을 상실시킬 수 있습니다. 이 경우 회원등록은 말소됩니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제9조 개인정보의 보호 및 제공</dt>
				<dd>
				<p>① 회사는 &#39;정보통신망 이용촉진 및 정보보호 등에 관한 법률&#39; 등 관계 법령이 정하는 바에 따라 회원정보를 포함한 개인정보를 보호하기 위해 노력합니다. 이용자의 개인정보의 보호 및 사용에 대해서는 관계 법령 및 회사의 개인정보처리방침이 적용됩니다.</p>
				<p>② 회사는 서비스 제공과 관련하여 취득한 이용자의 개인정보를 본인의 사전 승낙 없이 타인에게 누설, Kimberly-Clark has determined the classification of this information to be &quot;Public&quot;
				공개 또는 배포할 수 없으며, 서비스 관련 업무 이외의 상업적 목적으로 사용할 수 없습니다. 단, 다음
				각 호에 해당하는 경우는 예외입니다.</p>
				<ul>
					<li>1. 전기통신기본법 등 법률의 규정에 의해 국가기관의 요구가 있는 경우</li>
					<li>2. 범죄에 대한 수사상의 목적이 있거나 정보통신윤리위원회의 요청이 있는 경우</li>
					<li>3. 기타 관련 법령에서 정한 절차에 따른 요청이 있는 경우</li>
				</ul>
				<p>③ 회사의 서비스 이외의 단순히 링크된 제3자의 사이트에서는 회사의 개인정보처리방침이 적용되지 않습니다. 링크된 제3자의 개인정보처리방침을 확인할 책임은 이용자에게 있으며, 회사는 이에 대하여 책임을 부담하지 않습니다.</p>
				<p>④ 회사는 이용자의 귀책사유로 인하여 노출된 회원정보를 포함한 모든 개인정보에 대해서 일체의 책임을 지지 않습니다.</p>
				<p>⑤ 회사는 &#39;정보통신망 이용촉진 및 정보보호 등에 관한 법률&#39; 등 관계 법령을 준수하는 범위 내에서 마케팅의 목적으로 이용자의 개인정보 및 기타정보를 활용할 수 있습니다.</p><br>
				<p>⑥ 회사는 관계 법령과 이 약관이 금지하거나 미풍양속에 반하는 행위를 하지 않으며, 계속적이고 안정적으로 서비스를 제공하기 위하여 최선을 다하여 노력합니다.</p>
				<p>⑦ 회사는 이용자가 안전하게 서비스를 이용할 수 있도록 개인정보(신용정보 포함)보호를 위해 보안시스템을 갖추어야 합니다.</p>
				<p>⑧ 회사는 서비스 이용과 관련하여 이용자로부터 제기된 의견이나 불만이 정당하다고 인정할 경우에는 이를 처리하여야 합니다. 이용자가 제기한 의견이나 불만사항에 대해서는 전자우편 등을 통하여 이용자에게 처리과정 및 결과를 통지합니다.</p>
				<p>⑨ 전 항의 규정에 따라 회사가 이용자에게 통지하는 경우 7일 이상 회사의 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com) 내에 게시하거나 전자우편, SMS, 푸시알림 등의 방법으로 할 수 있습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제10조 서비스의 제공 및 변경</dt>
				<dd>
				<p>① 회사는 모든 이용자에게 1일 24시간 서비스 제공을 원칙으로 합니다. 단, 관계 법령 및 회사 정책에 따라 이용자 별로 서비스 이용의 범위, 방법, 내용, 제공 시, 횟수 등이 제한될 수 있습니다.</p>
				<p>② 회사는 서비스 제공에 필요할 경우 정기점검을 실시할 수 있으며, 정기점검시간은 유한킴벌리 프로페셔널 웹사이트(www.kr.kcprofessional.com) 내에 공지한 바에 따릅니다.</p>
				<p>③ 회사는 컴퓨터 등 정보통신설비의 보수점검, 교체 및 고장, 통신두절 또는 운영상 상당한 이유가 있는 경우에는 서비스의 제공을 일시적으로 중단할 수 있습니다. 이 경우 회사는 제9조 제9항에 정한 방법으로 사전에 이용자에게 통지합니다. 다만, 회사가 사전에 통지할 수 없는 부득이한 사유가 있는 경우에는 사후에 통지할 수 있습니다.</p>
				<p>④ 회사는 운영상, 경영상, 기술상의 필요에 따라 상당한 이유가 있는 경우 제공하고 있는 서비스의 전부 또는 일부 내용을 변경하거나 서비스를 종료할 수 있습니다.</p>
				<p>⑤ 서비스의 내용, 이용방법 등에 대하여 변경이 있는 경우에는 변경사유, 변경될 서비스의 내용 및 제공일자 등을 변경 7일 전에, 서비스를 종료하는 경우에는 30일 전에 서비스 화면에 공지합니다. 다만, 사전에 공지할 수 없는 부득이한 사정이 있는 경우에는 사후에 지체 없이 이를 공지할 수 있습니다.</p>
				<p>⑥ 회사는 이 약관 및 관계 법령에 특별한 규정이 없는 한 서비스의 중단, 변경 또는 종료가 회사의 고의 또는 중과실로 인한 경우를 제외하고는 그로 인하여 이용자가 입은 손해에 대하여 아무런 책임을 지지 않습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제11조 정보의 제공</dt>
				<dd>회사는 회원의 서비스 이용에 필요가 있다고 인정되는 각종 정보에 대해서 전자메일의 방법으로 회원에게 제공할 수 있습니다. 이를 원하지 않는 회원은 정보수신 거부를 할 수 있습니다.</dd>
			</dl>
			<dl>
				<dt>제12조 권리의 귀속</dt>
				<dd>
				<p>① 서비스, 회사에 등록된 저작물, 회사가 작성한 저작물 등에 대한 저작권 및 지적재산권은 회사에 귀속됩니다. 단 제휴계약에 따라 제공된 저작물 등은 제외합니다.</p>
				<p>② 유한킴벌리(Yuhan Kimberly), 유한킴벌리 로고, 기타 회사를 통해 소개되는 제품 및 서비스 명칭은 킴벌리클라크(Kimberly-Clark corp.)와 회사에 권리가 있는 상표입니다.</p>
				<p>③ 이용자가 게재한 게시물에 대한 모든 권리(저작권 등)와 책임은 이용자에게 있으며, 회사는 서비스 내에 이를 게재할 수 있는 권리를 갖습니다. 아울러 회사는 당해 게시물을 게시한 이용자의 동의 없이 게시물을 다른 목적으로 사용할 수 없습니다. 단, 비영리적인 경우에는 그러하지 아니합니다.</p>
				<p>④ 이용자는 서비스를 이용함으로써 얻은 정보 중 회사에 지적재산권이 귀속된 정보를 회사의 사전 승낙 없이 복제·송신·출판·배포·방송 기타 방법에 의하여 영리목적으로 이용하거나 제3자에게 이용하게 하여서는 안됩니다.</p>
				<p>⑤ 이용자가 서비스에 등록한 게시물이 타인의 지적재산권을 침해하는 경우 그로 인한 모든 책임은 해당 이용자가 부담합니다.</p>
				<p>⑥ 이용자의 게시물에 대해 제3자로부터 지적재산권, 명예 기타 권리의 침해로 이의가 제기된 경우 회사는 해당 게시물을 정지 또는 삭제할 수 있습니다.</p>
				<p>⑦ 회사는 서비스와 관련하여 이용자에게 회사가 정한 이용조건에 따라 서비스를 이용할 수 있는 이용 권한만을 부여하며 이용자는 이를 양도, 판매, 담보제공 등의 처분행위를 할 수 없습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제13조 게시물의 삭제</dt>
				<dd>
				<p>① 회사는 이용자가 서비스를 통하여 게시한 게시물의 내용에 대하여 책임을 지지 않습니다. 이용자의 게시물이 다음 각 호에 해당한다고 판단되는 경우에 사전통지 없이 삭제할 수 있으며, 이에 대해 회사는 어떠한 책임도 지지 않습니다.</p>
				<ul>
					<li>1. 외설적, 폭력적, 차별적, 보복적이거나 기타 법령이나 공서양속에 반하는 경우</li>
					<li>2. 회사 또는 제 3자나 그 제품, 브랜드에 대한 극단적인 악평 등 타인을 비방하거나 명예를 훼손하는 내용의 게시물</li>
					<li>3. 회사 또는 제3자의 지식재산권 등 기타 권리를 침해하거나 기타 게시자가 게시물에 대한 권리를 보유하지 아니한 경우</li>
					<li>4. 범죄 등 불법적인 행위와 관련한 내용 또는 기만적이거나 오도하는 게시물</li>
					<li>5. 타인의 의견을 폄하하는 내용, 의도적으로 타인을 불쾌하게 하거나 타인에게 충격을 주는 게시물</li>
					<li>6. 다른 제품이나 서비스의 판매 또는 홍보 등 영리를 목적으로 한 게시물로서 회사의 동의를 받지 아니한 것</li>
					<li>7. 회사가 별도로 규정, 고지한 게시기간이나 용량을 초과한 경우</li>
					<li>8. 회사가 별도로 규정, 고지한 주제가 있는 경우, 이와 관련 없는 게시물</li>
					<li>9. 영업비밀에 속하는 정보 또는 개인을 식별할 수 있는 정보를 포함하는 게시물</li>
					<li>10. 만 14세 미만의 자가 게시한 게시물</li>
					<li>11. 스팸 또는 피싱을 포함하는 경우</li>
					<li>12. 기타 이 약관이나 관련 법령에 위배되는 경우</li>
				</ul>
				<p>② &quot;회사&quot;가 운영하는 게시판 등에 게시된 정보로 인하여 법률상 이익이 침해된 이용자는 &quot;회사&quot;에게 당해 정보의 삭제 또는 반박내용의 게재를 요청할 수 있습니다. 이 경우 &quot;회사&quot;는 지체 없이 필요한 조치를 취하고 이를 즉시 요청자에게 통지합니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제14조 회원 탈퇴 및 이용 제한, 자격 상실</dt>
				<dd>
				<p>① 회원은 회사와의 대리점거래계약 만료, 해지 및 해제 등의 사유로 대리점거래계약이 종료된 경우 회사가 정하는 절차에 따라 회원탈퇴 신청을 할 수 있으며, 회사는 관계 법령 등이 정하는 바에 따라 이를 즉시 처리합니다.</p>
				<p>② 회원이 회원탈퇴를 하는 경우 회사는 회원탈퇴 즉시 그 회원의 이용자 정보를 파기 조치합니다.</p>
				<p>③ 회원이 제8조(이용자의 의무)의 규정을 위반한 경우 회사는 사전통보 없이 일방적으로 그 회원의 이용을 제한하거나 자격을 상실시킬 수 있고, 이로 인하여 서비스 운영에 손해가 발생한 경우 이에 대한 민•형사상 책임도 물을 수 있습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제 15조 이용의 제한</dt>
				<dd>
				<p>① 회사는 이용자가 이 약관의 의무를 위반하거나 서비스의 정상적인 운영을 방해한 경우, 경고, 일시정지, 영구이용정지 등으로 서비스 이용을 제한하거나 회원 자격을 상실시킬 수 있습니다.</p>
				<p>② 회사는 전항에도 불구하고, &#39;저작권법&#39; 및 &#39;컴퓨터프로그램보호법&#39;을 위반한 불법프로그램의 제공 및 운영방해, &#39;정보통신망 이용촉진 및 정보보호 등에 관한 법률&#39;을 위반한 불법통신 및 해킹, 악성프로그램의 배포, 접속권한 초과행위 등과 같이 관계 법령을 위반한 경우에는 즉시 영구이용정지를 할 수 있습니다.</p>
				<p>③ 본 조에 따라 서비스 이용을 제한하거나 회원 자격을 상실시키는 경우에 회사는 전자우편이나 SMS등을 통해 이용자에게 통지합니다.</p>
				<p>④ 이용자는 본 조에 따른 이용제한 등에 대해 회사의 고객센터를 통해 이의신청을 할 수 있습니다. 이때 이의가 정당하다고 회사가 인정하는 경우 회사는 즉시 서비스의 이용을 재개합니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제16조 손해배상</dt>
				<dd>
				<p>1. 이용자는 본인의 귀책사유로 인하여 회사나 다른 이용자가 입은 손해를 배상할 책임이 있습니다.</p>
				<p>2. 이용자가 서비스를 이용함에 있어 행한 불법행위나 이 약관 위반행위로 인하여 회사가 당해 이용자 이외의 제3자로부터 손해배상 청구 또는 소송을 비롯한 각종 이의제기를 받는 경우 당해 이용자는 자신의 책임과 비용으로 회사를 면책시켜야 하며, 회사가 면책되지 못한 경우 당해 이용자는 그로 인하여 회사에 발생한 모든 손해를 배상하여야 합니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제17조 면책</dt>
				<dd>
				<p>① 회사는 다음 사유로 서비스를 제공할 수 없는 경우 이로 인해 이용자에게 발생한 손해에 대해서는 책임을 부담하지 않습니다.</p>
				<ul>
					<li>1. 천재지변 또는 이에 준하는 불가항력의 상태가 있는 경우</li>
					<li>2. 이용자의 귀책사유로 서비스 이용에 장애가 있는 경우</li>
					<li>3. 기타 회사의 고의 또는 과실이 없는 사유로 인한 경우</li>
				</ul>
				<p>② 서비스 이용과 관련한 개인정보에 대한 관리•보존 책임은 전적으로 이용자에게 있고, 회사는 위 개인정보를 백업•복원•반환해야 할 의무가 없습니다. 필요한 경우 이용자는 자체적으로 독립적인 별도 저장소에 위 개인정보를 보관해야 합니다.</p>
				<p>③ 회사는 이용자 또는 제3자가 서비스에 게재한 게시물의 신뢰도 및 정확성 등 내용에 대해 책임을 지지 않으며, 서비스에 게재된 어떠한 의견이나 정보에 대해 확인이나 대표할 의무가 없습니다. 회사는 이용자나 제3자에 의해 표출된 의견을 승인, 반대 또는 수정하지 않습니다.</p>
				<p>④ 회사는 이용자 상호간 또는 이용자와 제3자 상호간에 서비스를 매개로 발생한 분쟁에 대해 개입할 의무가 없으며, 이로 인한 손해를 배상할 책임을 지지 않습니다.</p>
				<p>⑤ 회사는 무료로 제공되는 서비스 이용과 관련하여 관계 법령에 특별한 규정이 없는 한 책임을 지지 않습니다.</p>
				</dd>
			</dl>
			<dl>
				<dt>제18조 준거법 및 관할법원</dt>
				<dd>
				<p>① 이 약관의 해석과 적용에 관하여는 대한민국 법률을 준거법으로 합니다.</p>
				<p>② 서비스 이용과 관련하여 회사와 이용자 간 발생한 분쟁에 관한 소송의 관할법원은 대한민국 민사소송법상의 관할 법원으로 합니다.</p>
				</dd>
			</dl>
			<dl>
				<dd>
				<p>&lt;부칙&gt;</p>
				<p>이 약관은 2020년 11월 30일부터 시행됩니다.</p>
				</dd>
			</dl>
		</div>
		<!--// 11.30v4 -->
		</div>
	</div>
</div>
<!--// 11.24 사이트이용약관 -->

<!-- 12.01 삭제 -->
<!-- 11.24 통합 개인정보처리방침 -->
<!-- <div class="layer_body termspop" id="privacypop" aria-hidden="true" role="dialog">
	<div class="layer_wrap">
		<div class="layer_head">
			<button onclick="layerClose('privacypop')" class="layer_close manualfn">닫기</button>
			<h2 class="layer_title">통합 개인정보처리방침</h2>
		</div>
		<div class="layer_cont">
			<div class="inscroll">
				<iframe src="privacy.html" class="inframe"></iframe>
			</div>
		</div>
	</div>
</div> -->
<!--// 11.24 통합 개인정보처리방침 -->
<!--// 12.01 삭제 -->


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
			<li><a href="#" onclick="layerOpen('termspop');return false;">사이트이용약관</a></li>  <!-- 11.24 //-->
			<li><a href="https://www.yksso.co.kr/terms/brand" target="_blank" class="point">개인정보처리방침</a></li> <!-- 12.01 수정 //-->
			<li><a href="@@webroot2/custom/sitemap.html">사이트맵</a></li>
		</ul>

		<div class="col addr">
			<p><span>대표자 : 최규복</span></p>
			<p><span>사업자번호 : 120-81-11436</span></p>
			<p><a href="https://www.yuhan-kimberly.co.kr/Customer/Company" target="_blank"><span>회사대표 이메일 <i class="ic_mail"></i></span></a></p> <!-- 12.28 //-->
			<p><span>팩스 : 02-3213-7971</span></p>  <!-- 11.06 -->
			<p><span>주소 : 05551 서울시 송파구 올림픽로 300 롯데월드타워 29층</span></p>  <!-- 11.06 -->
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
				<option value="">Familysite</option> <!-- 12.02 수정 //-->
				<!-- <option value="http://www.goldenfriends.yuhan-kimberly.co.kr/">골든프렌즈</option> 11.24 삭제 //-->
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
	<!-- 12.03v2 수정 -->
	<div class="copyr">
		<p><span>®</span>/™ 표는 미국 킴벌리 클라크 월드와이드 또는 계열사의 세계적인 상표입니다.</p>
		<p><span>®</span>/™ Trademarks of Kimberly-Clark Worldwide, Inc. or its affiliates. © KCWW</p>
	</div>
	<!--// 12.03v2 수정 -->
</footer>
<script type="text/javascript" src="@@webroot2/assets/js/ui.js"></script>
