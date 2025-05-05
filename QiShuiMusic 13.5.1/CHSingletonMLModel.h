@interface CHSingletonMLModel : NSObject
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelConfiguration configuration;
@property (nonatomic) NSString modelKey;
- (id)model;
- (id)predictionFromFeatures:options:error:;
- (id)configuration;
- (id)modelDescription;
- (void).cxx_destruct;
- (long long)usageCount;
- (id)modelKey;
- (id)initWithMLModel:modelKey:;
- (void)incrementUsageCount;
- (void)decrementUsageCount;
+ (void)setup;
+ (id)modelWithContentsOfURL:configuration:error:;
+ (void)releaseModelWithKey:;
@end
