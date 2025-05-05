@interface gan_model_pre_A11Output : NSObject
@property (nonatomic) MLMultiArray output;
@property (nonatomic) NSSet featureNames;
- (id)output;
- (id)featureValueForName:;
- (void)setOutput:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithOutput:;
@end
