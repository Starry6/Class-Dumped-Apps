@interface AWEMVCardCellSubtitleElement : AWEDCFeedBaseCellElement
@property (nonatomic) AWEMVCardCellElementUIConfig uiConfig;
@property (nonatomic) UILabel subtitleLabel;
- (void)configWithModel:context:;
- (id)uiConfig;
- (void)setupSubViews;
- (void)themeDidChange:;
- (void)setUiConfig:;
- (void)setSubtitleLabel:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)reset;
- (id)subtitleLabel;
- (void)updateUI;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (double)lastBottomMargin;
+ (id)titleWithAwemeModel:context:;
+ (id)elementUIConfigInCardType:;
+ (id)bigCardUIConfig;
+ (id)smallCardUIConfig;
+ (id)titleLabelColorWithContext:;
+ (double)bottomMargin;
@end
