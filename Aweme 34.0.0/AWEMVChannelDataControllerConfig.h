@interface AWEMVChannelDataControllerConfig : NSObject
@property (nonatomic) Q feedType;
@property (nonatomic) Q usageType;
@property (nonatomic) AWEMVChannelInflowRequestModel inflowRequestModel;
- (id)initWithFeedType:usageType:inflowRequestModel:;
- (id)initWithFeedType:usageType:;
- (id)inflowRequestModel;
- (void)setInflowRequestModel:;
- (unsigned long long)feedType;
- (void)setFeedType:;
- (void).cxx_destruct;
- (void)setUsageType:;
- (unsigned long long)usageType;
+ (id)defaultConfig;
@end
