@interface VEAIMomentBIMConfig : NSObject
@property (nonatomic) Q algorithmType;
@property (nonatomic) NSArray aspectInfos;
@property (nonatomic) q runtimeSelectModels;
- (void)setAspectInfos:;
- (id)aspectInfos;
- (long long)runtimeSelectModels;
- (void)setRuntimeSelectModels:;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)algorithmType;
- (void)setAlgorithmType:;
@end
