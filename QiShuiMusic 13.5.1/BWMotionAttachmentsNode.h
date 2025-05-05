@interface BWMotionAttachmentsNode : BWNode
@property (nonatomic) BWNodeOutput sourceVideoWithMotionAttachmentsOutput;
@property (nonatomic) BWNodeOutput offlineVISMotionDataOutput;
@property (nonatomic) BOOL adjustsValidBufferRectForDarkShade;
- (void)dealloc;
- (id)sourceVideoWithMotionAttachmentsOutput;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)setAdjustsValidBufferRectForDarkShade:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)adjustsValidBufferRectForDarkShade;
- (id)offlineVISMotionDataOutput;
- (id)nodeSubType;
- (id)initWithSensorIDDictionaryByPortType:cameraInfoByPortType:tuningParameters:activePortTypes:horizontalSensorBinningFactor:verticalSensorBinningFactor:maxSupportedFrameRate:motionAttachmentsMode:motionAttachmentsSource:motionCallbackThreadPriority:provideSourceVideoWithMotionAttachmentsOutput:provideOfflineVISMotionDataOutput:;
@end
