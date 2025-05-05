@interface VNMLFeatureProvider : NSObject
@property (nonatomic) NSSet featureNames;
- (void)dealloc;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithBuffer:forKey:originalFeatureProvider:;
- (id)initWithScenePrint:dataType:forKey:originalFeatureProvider:;
- (id)featureValueFromScenePrint:dataType:;
@end
