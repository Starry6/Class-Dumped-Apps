@interface AWEMVCardCellTitleElement : AWEDCFeedBaseCellElement
@property (nonatomic) AWEMVCardCellElementUIConfig uiConfig;
@property (nonatomic) UILabel titleLabel;
- (void)configWithModel:context:;
- (id)uiConfig;
- (void)setupSubViews;
- (void)themeDidChange:;
- (void)setUiConfig:;
- (id)initWithContext:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)reset;
- (void)updateUI;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (double)lastBottomMargin;
+ (id)elementUIConfigInCardType:;
+ (id)bigCardUIConfig;
+ (id)smallCardUIConfig;
+ (id)titleLabelColorWithContext:;
+ (id)attributeTitleWithText:font:forCalculate:;
+ (double)bottomMargin;
@end
