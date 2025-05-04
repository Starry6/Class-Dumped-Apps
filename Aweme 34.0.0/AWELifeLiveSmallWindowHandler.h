@interface AWELifeLiveSmallWindowHandler : NSObject
@property (nonatomic) <AWEPOILiveSchemaFloatOnTop> floatOnTopManager;
@property (nonatomic) UIViewController fromVC;
@property (nonatomic) BOOL isAttach;
- (void)setFromVC:;
- (id)fromVC;
- (void)judgeRemoveLiveSmallWindow;
- (id)floatOnTopManager;
- (void)setFloatOnTopManager:;
- (void)setIsAttach:;
- (void)configureLiveSmallWindowWithViewController:fromViewController:tag:;
- (BOOL)isAttach;
- (void)publishEventWithWindowClose;
- (void)configureLiveSmallWindowWithViewController:fromViewController:;
- (BOOL)judgeShowLiveSmallWindow;
- (BOOL)judgeHiddenLiveSmallWindow;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
