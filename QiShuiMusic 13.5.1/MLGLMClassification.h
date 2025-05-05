@interface MLGLMClassification : MLClassifier
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classify:options:error:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSpecification:configuration:error:;
- (id)classify:error:;
- (BOOL)calculateClassProbability:input:error:;
- (id)classify:topK:error:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
