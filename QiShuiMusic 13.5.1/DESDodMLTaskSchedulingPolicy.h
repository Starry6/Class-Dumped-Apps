@interface DESDodMLTaskSchedulingPolicy : NSObject
@property (nonatomic) NSArray allRecipeIDs;
@property (nonatomic) Q recipeCountLimit;
@property (nonatomic) double timeLimit;
@property (nonatomic) double period;
@property (nonatomic) BOOL originReturnRouteEnabled;
@property (nonatomic) BOOL parsecReturnRouteEnabled;
@property (nonatomic) BOOL dediscoReturnRouteEnabled;
@property (nonatomic) NSURL postbackBaseURL;
@property (nonatomic) NSURL telemetryURL;
@property (nonatomic) NSNumber telemetrySamplingRate;
- (id)init;
- (id)telemetrySamplingRate;
- (void).cxx_destruct;
- (double)period;
- (double)timeLimit;
- (id)telemetryURL;
- (id)initWithAssetURL:error:;
- (id)initWithPolicyDict:;
- (id)allRecipeIDs;
- (id)_policyForRecipeID:error:;
- (id)samplingRateForRecipeID:error:;
- (id)predicateForRecipeID:error:;
- (unsigned long long)recipeCountLimit;
- (BOOL)originReturnRouteEnabled;
- (BOOL)parsecReturnRouteEnabled;
- (BOOL)dediscoReturnRouteEnabled;
- (id)postbackBaseURL;
@end
