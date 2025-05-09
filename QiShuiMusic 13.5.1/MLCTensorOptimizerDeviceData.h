@interface MLCTensorOptimizerDeviceData : NSObject
@property (nonatomic) NSArray momentumVectors;
@property (nonatomic) NSArray velocityVectors;
@property (nonatomic) NSArray centerWeightVectors;
@property (nonatomic) @ gpuOps;
@property (nonatomic) NSMutableArray momentumData;
@property (nonatomic) NSMutableArray momentumDataBytes;
@property (nonatomic) NSData sourceBNNSDesc;
@property (nonatomic) NSData gradientBNNSDesc;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)momentumVectors;
- (void)setMomentumVectors:;
- (id)velocityVectors;
- (void)setVelocityVectors:;
- (id)centerWeightVectors;
- (void)setCenterWeightVectors:;
- (id)gpuOps;
- (void)setGpuOps:;
- (id)momentumData;
- (void)setMomentumData:;
- (id)momentumDataBytes;
- (void)setMomentumDataBytes:;
- (id)sourceBNNSDesc;
- (void)setSourceBNNSDesc:;
- (id)gradientBNNSDesc;
- (void)setGradientBNNSDesc:;
+ (id)optimizerDeviceData;
@end
