@interface gan_modelOutput : NSObject
@property (nonatomic) MLMultiArray output;
@property (nonatomic) NSSet featureNames;
- (id)output;
- (id)featureValueForName:;
- (void)setOutput:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithOutput:;
@end
