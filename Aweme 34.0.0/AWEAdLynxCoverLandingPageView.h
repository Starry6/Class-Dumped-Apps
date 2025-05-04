@interface AWEAdLynxCoverLandingPageView : AWEBDARifleView
@property (nonatomic) BOOL isShowEventSent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rifleView:didFinishLoadWithURL:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (id)lynxComponent;
- (void)loadWithConfiguration;
- (BOOL)isShowEventSent;
- (void)setIsShowEventSent:;
- (id)initWithFrame:withAweme:onViewController:;
- (void)scrollViewWillBeginDragging:;
- (id)hitTest:withEvent:;
- (void)handleViewDidDisappear;
- (void)handleViewWillAppear;
+ (BOOL)isFullScreenLynxViewExistWithModel:;
+ (BOOL)isAdLynxComponentBelowWebViewTopBarExistWithModel:;
+ (BOOL)isAdLynxCoverLandingPageViewExistWithModel:;
@end
