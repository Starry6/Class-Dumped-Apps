@interface AWEIMFansGroupAdvantageDescView : UIView
@property (nonatomic) UILabel topTitleLabel;
@property (nonatomic) UIView topTitleLeftLine;
@property (nonatomic) UIView topTitleRightLine;
@property (nonatomic) @? themeReloadBlock;
- (void)configWithModel:;
- (void)setThemeReloadBlock:;
- (void)handleThemeReloadNotification;
- (void)__updateLineGradientLayer;
- (id)themeReloadBlock;
- (id)topTitleLeftLine;
- (id)topTitleRightLine;
- (void)setTopTitleLeftLine:;
- (void)setTopTitleRightLine:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)resetUI;
- (void)setTopTitleLabel:;
- (id)topTitleLabel;
@end
