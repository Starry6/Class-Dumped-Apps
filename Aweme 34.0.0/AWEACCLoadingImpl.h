@interface AWEACCLoadingImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissWindowLoadingWithAnimated:;
- (void)dismissWindowLoading;
- (id)showWindowLoadingWithScene:title:animated:;
- (id)showWindowLoadingWithScene:title:animated:afterDelay:;
- (id)showLoadingOnWindowWithScene:;
- (id)showTextLoadingWithScene:onView:title:animated:;
- (id)progressWithScene:title:;
- (id)showLoadingAndDisableUserInteractionWithScene:onView:;
- (id)showLoadingWithScene:onView:;
- (id)showLoadingOnWindowWithScene:afterDelay:;
- (id)loadingViewWithScene:;
- (id)showLoadingWithScene:onView:afterDelay:;
- (id)loadingViewUnbackgroundWithScene:;
- (id)showLoadingWithBackgroundWithScene:onView:;
- (id)showLoadingAndDisableUserInteractionWithScene:onView:afterDelay:;
- (id)textLoadingViewWithScene:;
- (id)showTextLoadingWithScene:onView:title:animated:afterDelay:;
- (id)showProgressWithScene:onView:title:animated:type:afterDelay:;
- (id)showProgressWithScene:onView:title:animated:type:;
- (id)showProcessWithScene:onView:title:animated:;
- (id)progressWithScene:title:progressTextFont:progressCircleWidth:;
- (id)showNormalProcessWithScene:onView:title:animated:;
- (id)loadingViewTracker;
@end
