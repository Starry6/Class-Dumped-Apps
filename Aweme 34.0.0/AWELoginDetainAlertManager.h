@interface AWELoginDetainAlertManager : NSObject
@property (nonatomic) AWELoginStrategySceneModel stayModel;
@property (nonatomic) AWELoginDetainAlert alert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willStartLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)canShow;
- (long long)methodType;
- (void)trackShow;
- (void)startNewPeriod;
- (id)oldStorageData;
- (void)showLoginDetainAlertWithCallBack:;
- (id)aAWELiteUGLuckyModuleAdapter;
- (id)stayModel;
- (void)recordLoginDetainAlertShow;
- (void)trackClickWithAction:;
- (id)frequencyTrackDictionary;
- (void)setStayModel:;
- (id)init;
- (void).cxx_destruct;
- (void)setAlert:;
- (id)alert;
- (long long)sceneType;
+ (Class)aAWELiteUGLuckyModuleAdapterClass;
+ (id)sharedManager;
@end
