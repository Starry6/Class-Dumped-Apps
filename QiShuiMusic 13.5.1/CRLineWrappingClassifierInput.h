@interface CRLineWrappingClassifierInput : NSObject
@property (nonatomic) MLMultiArray features;
@property (nonatomic) NSSet featureNames;
- (id)initWithFeatures:;
- (id)featureValueForName:;
- (void)setFeatures:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)features;
@end
