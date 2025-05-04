@interface AWEVideoPlayBitrateControler : NSObject
@property (nonatomic) q IESVideoBSNetworkProfilerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getWithURLString:params:modelClass:completion:;
- (long long)getIESVideoBSNetworkProfilerType;
- (void)videoDidDownloadDataLength:interval:;
- (void)currentConfigDidNotChange:networkSpeed:;
- (void)currentConfigDidChangeFrom:to:networkSpeed:;
- (void)localServerTestSpeedInfo:size:;
- (void)setIESVideoBSNetworkProfilerType:;
- (id)liveModuleService;
- (long long)IESVideoBSNetworkProfilerType;
- (void)updateBitrateConfiguration;
- (void)dealloc;
+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (void)setupWithoutRequest;
+ (void)updateSettingsWithDictionaryCore:;
+ (void)asynBitrateSettingJsonModel:;
+ (id)sharedInstance;
+ (void)setup;
+ (void)setEnabled:;
@end
