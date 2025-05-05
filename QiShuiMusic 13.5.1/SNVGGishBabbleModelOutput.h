@interface SNVGGishBabbleModelOutput : NSObject
@property (nonatomic) MLMultiArray output1;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithOutput1:;
- (id)output1;
- (void)setOutput1:;
@end
