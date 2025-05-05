@interface SecExperimentConfig : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary config;
@property (nonatomic) I fleetSampleRate;
@property (nonatomic) I deviceSampleRate;
@property (nonatomic) NSDictionary configurationData;
@property (nonatomic) BOOL isSampled;
- (void)setConfig:;
- (id)identifier;
- (id)configurationData;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfiguration:;
- (void)setIdentifier:;
- (unsigned int)hostHash;
- (BOOL)shouldRunWithSamplingRate:;
- (BOOL)isSampled;
- (unsigned int)fleetSampleRate;
- (void)setFleetSampleRate:;
- (unsigned int)deviceSampleRate;
- (void)setDeviceSampleRate:;
- (void)setConfigurationData:;
@end
