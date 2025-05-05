@interface MLSupportVectorClassifier : MLClassifier
@property (nonatomic) MLSVMEngine engine;
- (id)engine;
- (void)setEngine:;
- (id)classify:options:error:;
- (id)initWithEngine:description:configuration:error:;
- (void).cxx_destruct;
+ (id)featureValueWithObject:;
@end
