@interface VCPMAMLModel : NSObject
@property (nonatomic) MLModel model;
@property (nonatomic) q inputSize;
@property (nonatomic) I inputPixelFormat;
@property (nonatomic) NSString inputFeatureName;
@property (nonatomic) NSString outputFeatureName;
- (id)model;
- (id)init;
- (long long)inputSize;
- (void).cxx_destruct;
- (id)inputFeatureName;
- (id)outputFeatureName;
- (id)initWithModelName:;
- (unsigned int)inputPixelFormat;
+ (id)vcp_sharedModelWithModelName:;
@end
