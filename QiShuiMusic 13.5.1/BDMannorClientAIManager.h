@interface BDMannorClientAIManager : NSObject
@property (nonatomic) Pitaya pitayaInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)downgradeSetupHttpRequestFilter;
- (id)processVersion:;
- (void)startupClientAI;
- (void)initMannorClientAI;
- (void)initPitaya;
- (void)mannorSettingDidChange;
- (id)pitayaInstance;
- (void)setPitayaInstance:;
- (void)setupHttpRequestFilter;
- (id)init;
- (void).cxx_destruct;
+ (id)getFeatureResultString;
+ (BOOL)isPitayaDebugMode;
+ (id)settingConfig;
+ (id)sharedInstance;
@end
