@interface AWEIMSecurityGlobalToastManager : NSObject
@property (nonatomic) BOOL enableProcessData;
@property (nonatomic) AWEIMSecurityGlobalToastStore store;
@property (nonatomic) double lastShowTimestamp;
@property (nonatomic) AWEIMSecurityGlobalToastFloaterManager floaterManager;
- (void)tryShowFloatSafetyTipsViewOnView:viewController:onAddTipsView:floatViewOnDismiss:;
- (void)registerByteSync;
- (double)lastShowTimestamp;
- (void)setLastShowTimestamp:;
- (id)floaterManager;
- (void)reportSecurityGlobalToastPama:toastStatus:content:;
- (void)setFloaterManager:;
- (void)setEnableProcessData:;
- (void)requestGlobalToastDetail;
- (void)__handleMessage:;
- (BOOL)enableProcessData;
- (BOOL)__checkGlobalToatFrequencyValid;
- (void)tryShowGlobalToast:dialog:;
- (BOOL)__isValideScene;
- (id)init;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
