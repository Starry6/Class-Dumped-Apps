@interface IESLiveToastLoadingManager : NSObject
@property (nonatomic) IESLiveToastLoadingViewController currentShowingToast;
- (id)currentShowingToast;
- (void)dismissCurrentToastLoading;
- (void)loadingToastViewIsHidden:;
- (void)loadingToastViewIsShowing:;
- (void)setCurrentShowingToast:;
- (void).cxx_destruct;
+ (id)sharedToastLoadingManager;
@end
