@interface MLLazyUnionFeatureProvider : NSObject
@property (nonatomic) <MLFeatureProvider> first;
@property (nonatomic) <MLFeatureProvider> second;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)second;
- (id)featureNames;
- (id)first;
- (void)setFirst:;
- (void).cxx_destruct;
- (void)setSecond:;
- (id)initWithFeaturesFrom:addedToFeaturesFrom:;
- (id)unionFeatureProvider;
@end
