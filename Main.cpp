# include <Siv3D.hpp> // Siv3D v0.6.14

/*
逆さ文字のマップupside_down_mapの記述コメントについては以下のウェブページを参照した．
webページタイトル: twitter→ɹəʇʇɪʍʇのように英数字を180度回転して表示する方法,
URL: https://id.fnshr.info/2013/01/25/upsidedowntext/,
webページ作成者: 西原史暁,
取得日: 2024-02-24.

逆さ文字のマップupside_down_mapの記述はChatGPTを用いた．
*/


// 逆さ文字のマップ
const std::unordered_map<char32, char32> upside_down_map = {
	// 英大文字
	{U'A', U'∀'},	// 論理学などで全称量化子	U+2200
	{U'B', U'ᗺ'},	// カナダ先住民文字の1つ	U+15FA
	{U'C', U'Ↄ'},	// アンチシグマと呼ばれ、かつてラテン語でPSの音を示すのに用いられた（大文字）	U+2183
	{U'D', U'ᗡ'},	// カナダ先住民文字の1つ	U+15E1
	{U'E', U'ヨ'},	// カタカナのヨ（よ）	U+30E8
	{U'F', U'ⅎ'},	// ディガンマ・インウェルスムと呼ばれ、かつてラテン語でWの音を示すのに用いられた（小文字）	U+214E
	{U'G', U'⅁'},	// グルジア文字のჹをローマ字に転写するときに使用	U+2141
	{U'H', U'H'},	// ローマ字のH（エッチ）	U+0048
	{U'I', U'I'},	// ローマ字のI（アイ）	U+0049
	{U'J', U'ɾ'},	// IPAで歯茎はじき音	U+027E
	{U'K', U'丬'},	// 「壮」や「将」といった漢字の部首で、「しょうへん」と呼ばれる	U+4E2C
	{U'L', U'⅂'},	// 用法不明	U+2142
	{U'M', U'W'},	// ローマ字のW（ダブリュー）	U+0057
	{U'N', U'N'},	// ローマ字のN（エヌ）	U+004E
	{U'O', U'O'},	// ローマ字のO（オー）	U+004F
	{U'P', U'd'},	// ローマ字のd（ディー）	U+0064
	{U'Q', U'Ό'},	// ギリシャ文字のΟ（オミクロン）に鋭アクセント記号をつけたもの	U+038C
	{U'R', U'ᴚ'},	// 昔のIPAで無声口蓋垂摩擦音	U+1D1A
	{U'S', U'S'},	// ローマ字のS（エス）	U+0053
	{U'T', U'⏊'},	// 歯科表記記号の1つ	U+23CA
	{U'U', U'∩'},	// 集合の積	U+2229
	{U'V', U'Λ'},	// ギリシャ文字のΛ（ラムダ、大文字）	U+039B
	{U'W', U'M'},	// ローマ字のM（エム）	U+004D
	{U'X', U'X'},	// ローマ字のx（エックス）	U+0058
	{U'Y', U'⅄'},	// 用法不明	U+2144
	{U'Z', U'Z'},	// ローマ字のZ（ゼット）	U+005A

	// 英小文字
	{U'a', U'ɐ'},	// IPAで中舌狭めの広母音	U+0250
	{U'b', U'q'},	// ローマ字のq（キュー）	U+0071
	{U'c', U'ɔ'},	// IPAで円唇後舌半広母音	U+0254
	{U'd', U'p'},	// ローマ字のp（ピー）	U+0070
	{U'e', U'ə'},	// IPAで非円唇中舌中央母音	U+0259
	{U'f', U'ɟ'},	// IPAで有声硬口蓋破裂音	U+025F
	{U'g', U'ɓ'},	// IPAで両唇入破音	U+0253
	{U'h', U'ɥ'},	// IPAで有声両唇硬口蓋接近音	U+0265
	{U'i', U'!'},	// 感嘆符	U+0021
	{U'j', U'ɾ'},	// IPAで歯茎はじき音	U+027E
	{U'k', U'ʞ'},	// 昔のIPAで軟口蓋吸着音	U+029E
	{U'l', U'ꞁ'},	// かつてウェールズ語の無声側面摩擦音を表した	U+A781
	{U'm', U'ɯ'},	// IPAで非円唇後舌狭母音	U+026F
	{U'n', U'u'},	// ローマ字のu（ユー）	U+0075
	{U'o', U'o'},	// ローマ字のo（オー）	U+006F
	{U'p', U'd'},	// ローマ字のd（ディー）	U+0064
	{U'q', U'b'},	// ローマ字のb（ビー）	U+0062
	{U'r', U'ɹ'},	// IPAで歯茎接近音	U+0279
	{U's', U's'},	// ローマ字のs（エス）	U+0073
	{U't', U'ʇ'},	// 昔のIPAで歯吸着音	U+0287
	{U'u', U'n'},	// ローマ字のn（エヌ）	U+006E
	{U'v', U'ʌ'},	// IPAで非円唇後舌半広母音	U+028C
	{U'w', U'ʍ'},	// IPAで無声両唇軟口蓋摩擦音	U+028D
	{U'x', U'x'},	// ローマ字のx（エックス）	U+0078
	{U'y', U'ʎ'},	// IPAで硬口蓋側面接近音	U+028E
	{U'z', U'z'},	// ローマ字のz（ゼット）	U+007A

	// 数字、句読点等
	{U'0', U'0'},	// アラビア数字の0（零）	U+0030
	{U'1', U'⇂'},	// 下向きの矢印	U+21C2
	{U'2', U'ᘔ'},	// カナダ先住民文字の1つ	U+1614
	{U'3', U'ε'},	// ギリシャ文字のε（イプシロン、小文字）	U+03B5
	{U'4', U'߈'},	// ンコ文字の8（八）	U+07C8
	{U'5', U'5'},	// アラビア数字の5（五）	U+0035
	{U'6', U'9'},	// アラビア数字の9（九）	U+0039
	{U'7', U'L'},	// ローマ字のL（エル）	U+004C
	{U'8', U'8'},	// アラビア数字の8（八）	U+0038
	{U'9', U'6'},	// アラビア数字の6（六）	U+0036
	{U'.', U'˙'},	// 上ドット	U+02D9
	{U',', U'‘'},	// アポストロフィ	U+0027
	{U'–', U'–'},	// ハイフンマイナス	U+002D
	{U':', U':'},	// コロン	U+003A
	{U';', U'؛'},	// アラビア語のセミコロン	U+061B
	{U'!', U'¡'},	// 逆感嘆符（スペイン語などで使用）	U+00A1
	{U'?', U'¿'},	// 逆疑問符（スペイン語などで使用）	U+00BF
	{U'&', U'⅋'}	// 乗法的論理和	U+214B
};


// 受け取った文字に対応する逆さ文字を返す
char32 CharToUpsideDownChar(char32 original_char)
{
	auto it = upside_down_map.find(original_char);
	if (it != upside_down_map.end()) {
		return it->second;
	}
	// 対応する逆さ文字がない場合は元の文字をそのまま返す
	return original_char;
}


// 受け取った文章を逆さまにして返す
String StringsUpsideDown(String original_text)
{
	String upside_down_text;
	char32 upside_down_char;

	for (int i = 0; i < original_text.size(); i++)
	{
		upside_down_char = CharToUpsideDownChar(original_text[i]);
		upside_down_text.insert(upside_down_text.begin(), upside_down_char);
	}

	return upside_down_text;
}


void Main()
{
	// 背景の色を設定する
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	const Font font{ FontMethod::MSDF, 48, Typeface::Bold };

	TextAreaEditState text_area_edit_state_0{U"Enter here the text you wish to display upside down!"};
	TextAreaEditState text_area_edit_state_1;

	while (System::Update())
	{
		//ClearPrint();

		// アプリ名&バージョン表示
		font(U"Strings Upside Down App\nver 1.00").drawAt(60, Vec2{ 400, 100 }, ColorF{ 0.11 });

		// 実行ボタンが押されたとき
		if (SimpleGUI::Button(U"↓ Upside Down ↓", Vec2{ 300, 340 }))
		{
			text_area_edit_state_1.active = false;

			// text_area_edit_state_0.textを逆さまにしてtext_area_edit_state_1.textに代入
			text_area_edit_state_1.text = StringsUpsideDown(text_area_edit_state_0.text);

			text_area_edit_state_1.textChanged = true;
			text_area_edit_state_1.active = true;
		}

		SimpleGUI::TextArea(text_area_edit_state_0, Vec2{ 40, 210 }, SizeF{ 720, 100 }, SimpleGUI::PreferredTextAreaMaxChars, true);
		SimpleGUI::TextArea(text_area_edit_state_1, Vec2{ 40, 410 }, SizeF{ 720, 100 }, SimpleGUI::PreferredTextAreaMaxChars, true);
	}
}
