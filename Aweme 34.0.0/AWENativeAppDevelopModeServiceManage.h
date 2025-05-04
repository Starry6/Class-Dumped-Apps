@interface AWENativeAppDevelopModeServiceManage : NSObject
@property (nonatomic) BOOL isColdBootAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)trackDevelopModeSwitchWithIsOn:userOpen:appCount:;
- (void)setIsColdBootAweme:;
- (void)refreshTestTimorList;
- (BOOL)isColdBootAweme;
- (void)trackDevelopAppLaunch;
- (id)init;
- (void)dealloc;
+ (BOOL)canShowDevModeEntrance;
+ (id)shareInstance;
@end
