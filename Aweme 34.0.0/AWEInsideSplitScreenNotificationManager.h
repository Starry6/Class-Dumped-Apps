@interface AWEInsideSplitScreenNotificationManager : NSObject
- (void)onApplicationDidChangeStatusBarOrientation:;
- (void)onTabChanged:;
- (void)leftSideBarDidOpenNotification:;
- (void)onPipServiceDidStart:;
- (void)addObserver;
- (void)appWillEnterForeground:;
+ (id)sharedInstance;
@end
