@interface IESLiveSaaSToastLoadingManager : NSObject
@property (nonatomic) IESLiveSaaSToastLoadingViewController currentShowingToast;
- (id)currentShowingToast;
- (void)dismissCurrentToastLoading;
- (void)loadingToastViewIsHidden:;
- (void)loadingToastViewIsShowing:;
- (void)setCurrentShowingToast:;
- (void).cxx_destruct;
+ (id)sharedToastLoadingManager;
@end
