@interface VeLivePlayerSettingManager : NSObject
@property (nonatomic) <VeLivePlayerSettingProtocol> delegate;
- (id)defaultABRSDKParamsConfig;
- (id)defaultBMFConfig;
- (id)defaultLowLatencyFLVConfig;
- (id)defaultQuicConfig;
- (id)defaultRTMConfig;
- (id)defaultSettingOrOptions;
- (id)getABRConfigWith:;
- (id)getBMFConfigWith:;
- (id)getLowLatencyFLVConfigWith:;
- (id)getQuicConfigWith:;
- (id)getRTMConfigWith:;
- (id)getSettingOrOptions:;
- (id)replace:withDict:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
