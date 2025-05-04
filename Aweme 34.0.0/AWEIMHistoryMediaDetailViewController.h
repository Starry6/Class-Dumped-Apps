@interface AWEIMHistoryMediaDetailViewController : UIViewController
@property (nonatomic) AWEIMHistoryMediaDisplayView displayView;
@property (nonatomic) BOOL adjustForBigFontStyle;
- (void)setDisplayView:;
- (id)displayView;
- (void)backBtnClicked:;
- (void)setAdjustForBigFontStyle:;
- (BOOL)adjustForBigFontStyle;
- (void)setupViewWithDataCenter:title:;
- (void)setupViewWithDataCenter:;
- (void).cxx_destruct;
@end
