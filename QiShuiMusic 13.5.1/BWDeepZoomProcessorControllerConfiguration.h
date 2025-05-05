@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) BWVideoFormat inputFormat;
@property (nonatomic) BWVideoFormat outputFormat;
@property (nonatomic) NSInteger version;
@property (nonatomic) NSInteger type;
- (id)outputFormat;
- (void)setOutputFormat:;
- (void)dealloc;
- (void)setVersion:;
- (int)version;
- (void)setType:;
- (int)type;
- (id)inputFormat;
- (void)setInputFormat:;
+ (BOOL)doDeepZoomForSampleBuffer:type:sensorConfiguration:intermediateZoomSrcRectOut:intermediateZoomDstRectOut:;
+ (BOOL)doDeepZoomForPixelBuffer:type:sensorConfiguration:metadata:stillImageSettings:intermediateZoomSrcRectOut:intermediateZoomDstRectOut:;
+ (int)deepZoomProcessingModeForSampleBuffer:type:sensorConfiguration:;
+ (int)deepZoomProcessingModeForPixelBuffer:type:sensorConfiguration:stillImageSettings:;
@end
