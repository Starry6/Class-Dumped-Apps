@interface AWEIMFansGroupAdvantageDescView : UIView
@property (nonatomic) UILabel topTitleLabel;
@property (nonatomic) UIView topTitleLeftLine;
@property (nonatomic) UIView topTitleRightLine;
@property (nonatomic) @? themeReloadBlock;
- (void)__updateLineGradientLayer;
- (void)configWithModel:;
- (void)iesim_themeReload;
- (void)setThemeReloadBlock:;
- (void)setTopTitleLeftLine:;
- (void)setTopTitleRightLine:;
- (id)themeReloadBlock;
- (id)topTitleLeftLine;
- (id)topTitleRightLine;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)resetUI;
- (id)topTitleLabel;
- (void)setTopTitleLabel:;
@end
