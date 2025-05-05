@interface CVAMattingRequest : NSObject
@property (nonatomic) CVADisparityPostprocessingRequest disparityPostprocessingRequest;
@property (nonatomic) ^{__CVBuffer=} segmentationPixelBuffer;
@property (nonatomic) ^{__CVBuffer=} skinSegmentationPixelBuffer;
@property (nonatomic) ^{__CVBuffer=} destinationAlphaMattePixelBuffer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDisparityPostprocessingRequest:segmentationPixelBuffer:skinSegmentationPixelBuffer:destinationAlphaMattePixelBuffer:error:;
- (id)segmentationPixelBuffer;
- (id)initWithDisparityPostprocessingRequest:destinationAlphaMattePixelBuffer:;
- (id)initWithDisparityPostprocessingRequest:segmentationPixelBuffer:destinationAlphaMattePixelBuffer:error:;
- (id)disparityPostprocessingRequest;
- (id)skinSegmentationPixelBuffer;
- (id)destinationAlphaMattePixelBuffer;
@end
