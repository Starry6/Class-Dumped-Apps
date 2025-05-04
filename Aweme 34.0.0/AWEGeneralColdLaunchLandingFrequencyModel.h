@interface AWEGeneralColdLaunchLandingFrequencyModel : MTLModel
@property (nonatomic) NSString configId;
@property (nonatomic) NSString periodTime;
@property (nonatomic) q periodLandingCount;
@property (nonatomic) q allLandingCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configId;
- (void)setConfigId:;
- (void)setPeriodTime:;
- (void)setPeriodLandingCount:;
- (void)setAllLandingCount:;
- (id)initWithConfigId:periodTime:periodLandingCount:allLandingCount:;
- (id)periodTime;
- (long long)periodLandingCount;
- (long long)allLandingCount;
- (void).cxx_destruct;
@end
