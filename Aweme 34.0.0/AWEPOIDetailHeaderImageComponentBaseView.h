@interface AWEPOIDetailHeaderImageComponentBaseView : DitoComponentView
@property (nonatomic) UIView backgroundColorView;
@property (nonatomic) BOOL canPreview;
- (void)pageDidScroll:;
- (void)bindActionAndState;
- (void)updateComponentViewAlpha:;
- (void)updateBackgroundViewTop:;
- (void)updateBgTopForPullCollapseChange:;
- (void)updateBgTopForPullCollapseEnd:;
- (BOOL)canPreview;
- (id)init;
- (id)initWithFrame:;
- (double)screenWidth;
- (id)backgroundColorView;
- (double)screenHeight;
- (void).cxx_destruct;
- (void)setBackgroundColorView:;
- (void)setupUI;
@end
