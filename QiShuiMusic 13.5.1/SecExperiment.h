@interface SecExperiment : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL samplingDisabled;
@property (nonatomic) SecExperimentConfig cachedConfig;
@property (nonatomic) NSString identifier;
- (void)setName:;
- (id)identifier;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabledWithDefault:;
- (BOOL)isSamplingDisabled;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRemoteExperimentAsset;
- (id)copyRandomExperimentConfigurationFromAsset:;
- (BOOL)samplingDisabled;
- (void)setSamplingDisabled:;
- (id)cachedConfig;
- (void)setCachedConfig:;
@end
