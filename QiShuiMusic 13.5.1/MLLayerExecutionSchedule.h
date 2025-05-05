@interface MLLayerExecutionSchedule : NSObject
@property (nonatomic) q layerError;
@property (nonatomic) NSString layerName;
@property (nonatomic) Q preferredComputeUnit;
@property (nonatomic) NSString layerTypeName;
@property (nonatomic) Q supportedComputeUnits;
@property (nonatomic) q layerIndex;
- (id)layerName;
- (void).cxx_destruct;
- (id)initWithLayerError:;
- (id)initWithComputeUnits:layerName:layerError:layerTypeName:supportedComputeUnits:layerIndex:;
- (long long)layerError;
- (unsigned long long)preferredComputeUnit;
- (id)layerTypeName;
- (unsigned long long)supportedComputeUnits;
- (long long)layerIndex;
@end
