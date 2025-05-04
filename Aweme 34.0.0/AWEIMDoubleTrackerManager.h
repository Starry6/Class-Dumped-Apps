@interface AWEIMDoubleTrackerManager : NSObject
@property (nonatomic) q deviceGroup;
@property (nonatomic) q applogSamplingBase;
@property (nonatomic) NSDictionary applogSampling;
@property (nonatomic) NSDictionary applogPVSampling;
@property (nonatomic) NSDictionary overwriteTrackType;
- (void)monitorTrackService:status:params:;
- (void)doubleTrackEvent:status:params:;
- (void)applogTrackEvent:params:;
- (void)trackThreadLogWithType:parameter:callback:;
- (BOOL)needUploadByCustomSampling:params:;
- (double)p_randFrom0To1;
- (void)p_configSettings;
- (long long)applogSamplingBase;
- (id)p_applogPVSamplingLocalConfig;
- (id)overwriteTrackType;
- (void)p_trackEvent:status:params:type:;
- (void)applogTrackEvent:params:ignoreSampling:;
- (id)applogPVSampling;
- (id)applogSampling;
- (id)init;
- (long long)deviceGroup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
