@interface AWEHotSearchPublishBottomBarView : AWEHotSpotPublishEntranceBaseView
@property (nonatomic) UIImageView BarIcon;
@property (nonatomic) UILabel BarText;
- (void)p_setupUI;
- (void)p_updateLayout;
- (void)setBarText:;
- (void)setBarIcon:;
- (id)bottomBarRealSize;
- (void)p_setupClickedAction;
- (id)BarText;
- (id)BarIcon;
- (id)p_barTextCalculateSize;
- (id)barIconSize;
- (double)iconAndTextSpacing;
- (void)p_onShotClicked;
- (id)initWithFrame:;
- (double)horizontalPadding;
- (void).cxx_destruct;
- (double)viewHeight;
- (void)updateWithModel:;
@end
