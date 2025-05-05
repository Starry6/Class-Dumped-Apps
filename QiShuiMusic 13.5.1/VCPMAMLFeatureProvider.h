@interface VCPMAMLFeatureProvider : NSObject
@property (nonatomic) NSSet featureNames;
- (id)init;
- (void)dealloc;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithCVPixelBuffer:andFeatureName:;
+ (id)featureProviderWithCVPixelBuffer:andFeatureName:;
@end
