@interface BDTrackerSamplingManager : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) BOOL samplingEnabled;
- (id)samplingVersion;
- (BOOL)_internalUpdate:;
- (BOOL)hitSampling:withParameters:;
- (BOOL)pluginEnabled;
- (void)setCaliberDeviceID:;
- (void)setCaliberUserUniqueID:;
- (void)updateSamplingConfiguration:;
- (id)filePath;
- (id)appId;
- (void)setAppId:;
- (void).cxx_destruct;
- (void)loadData;
- (id)plugin;
- (BOOL)samplingEnabled;
- (void)setSamplingEnabled:;
@end
