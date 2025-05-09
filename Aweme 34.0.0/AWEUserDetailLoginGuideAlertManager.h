@interface AWEUserDetailLoginGuideAlertManager : NSObject
@property (nonatomic) @? onClose;
@property (nonatomic) AWEAlertContext alertContext;
@property (nonatomic) AWEAlertCallbackWrapper callbackWrapper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:callbackWrapper:;
- (void)showWithCloseCallback:;
- (long long)methodType;
- (id)alertContext;
- (void)setAlertContext:;
- (id)mr_accessIDForEvent:;
- (BOOL)mr_enableAccessControlForEvent:;
- (id)callbackWrapper;
- (void)setCallbackWrapper:;
- (BOOL)isShowFrequencySatisfied;
- (BOOL)shouldUseLoginStrategyFrequencyControl;
- (void)startNewPeriod;
- (BOOL)isShowFrequencySatisfiedByLoginStrategy;
- (id)loginStrategySceneModel;
- (id)oldStorageData;
- (void)trackPopViewWithModel:;
- (void)loginWithForceHalfScreen;
- (void)recordAlertShow;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareWithCompletion:;
- (long long)sceneType;
- (id)onClose;
- (void)setOnClose:;
+ (id)userDetailLoginGuideModel;
+ (id)sharedManager;
@end
