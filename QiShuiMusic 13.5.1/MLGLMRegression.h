@interface MLGLMRegression : MLRegressor
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)regress:options:error:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSpecification:configuration:error:;
- (id)initWithLRSpec:configuration:error:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
