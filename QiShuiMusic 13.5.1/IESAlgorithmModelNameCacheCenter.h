@interface IESAlgorithmModelNameCacheCenter : NSObject
@property (nonatomic) NSCache algorithmModelNameCache;
@property (nonatomic) NSCache requirementAlgorithmModelNameCache;
- (id)algorithmModelNameCache;
- (id)requirementAlgorithmModelNameCache;
- (void)setAlgorithmModelNameCache:;
- (void)setRequirementAlgorithmModelNameCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedCeneter;
@end
