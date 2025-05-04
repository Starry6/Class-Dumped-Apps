@interface AWEBusinessBundleMetadata : NSObject
@property (nonatomic) NSString bundlePath;
@property (nonatomic) q version;
@property (nonatomic) q thresholdSize;
@property (nonatomic) BOOL generalCleaningEnable;
@property (nonatomic) AWEPerfResourceCleanConfiguration cleaningConfig;
- (void)writeMetadata;
- (long long)thresholdSize;
- (void)setThresholdSize:;
- (BOOL)generalCleaningEnable;
- (void)setGeneralCleaningEnable:;
- (id)cleaningConfig;
- (void)setCleaningConfig:;
- (id)initWithBundlePath:businessConfiguration:;
- (void)setBundlePath:;
- (void)readMetadata;
- (long long)version;
- (id)bundlePath;
- (void)setVersion:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithBundlePath:;
@end
