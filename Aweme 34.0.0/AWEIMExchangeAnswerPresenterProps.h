@interface AWEIMExchangeAnswerPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? coverTappedActionBlock;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString bgUrl;
@property (nonatomic) NSString question;
@property (nonatomic) NSString exchangeHint;
@property (nonatomic) {CGSize=dd} titleSize;
@property (nonatomic) YYTextLayout textLayout;
@property (nonatomic) YYTextLayout exchangeHintLayout;
- (id)bgUrl;
- (void)setTitleSize:;
- (void)setCoverTappedActionBlock:;
- (id)coverTappedActionBlock;
- (id)exchangeHintLayout;
- (void)setExchangeHintLayout:;
- (void)setBgUrl:;
- (void)setExchangeHint:;
- (id)exchangeHint;
- (void).cxx_destruct;
- (void)setTextLayout:;
- (id)textLayout;
- (id)titleSize;
- (id)bgColor;
- (void)setBgColor:;
- (id)question;
- (void)setQuestion:;
@end
