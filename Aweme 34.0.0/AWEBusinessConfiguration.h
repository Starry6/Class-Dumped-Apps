@interface AWEBusinessConfiguration : NSObject
@property (nonatomic) q version;
@property (nonatomic) NSString topBusinessLine;
@property (nonatomic) NSString businessLine;
@property (nonatomic) q thresholdSize;
@property (nonatomic) NSString resourceHostingPlatform;
@property (nonatomic) Q inDomain;
@property (nonatomic) BOOL generalCleaningEnable;
@property (nonatomic) AWEPerfResourceCleanConfiguration cleaningConfig;
- (long long)thresholdSize;
- (void)setThresholdSize:;
- (id)topBusinessLine;
- (void)setTopBusinessLine:;
- (id)businessLine;
- (void)setBusinessLine:;
- (id)resourceHostingPlatform;
- (void)setResourceHostingPlatform:;
- (unsigned long long)inDomain;
- (void)setInDomain:;
- (BOOL)generalCleaningEnable;
- (void)setGeneralCleaningEnable:;
- (id)cleaningConfig;
- (void)setCleaningConfig:;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
@end
