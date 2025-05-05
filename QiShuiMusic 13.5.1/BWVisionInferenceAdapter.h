@interface BWVisionInferenceAdapter : NSObject
@property (nonatomic) VNProcessingDevice applicationProcessingDevice;
@property (nonatomic) VNProcessingDevice graphicsProcessingDevice;
@property (nonatomic) VNProcessingDevice neuralProcessingDevice;
@property (nonatomic) VNProcessingDevice espressoBasedRequestProcessingDevice;
- (id)init;
- (void)dealloc;
- (id)inferenceProviderForType:version:configuration:resourceProvider:status:;
- (id)espressoBasedRequestProcessingDevice;
- (id)neuralProcessingDevice;
- (id)graphicsProcessingDevice;
- (id)applicationProcessingDevice;
@end
