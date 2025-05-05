@interface BWDeferredCaptureControllerInput : BWStillImageProcessorControllerInput
@property (nonatomic) BWDeferredCaptureContainer captureContainer;
@property (nonatomic) NSInteger compressionProfile;
@property (nonatomic) NSInteger processingError;
@property (nonatomic) BWDeferredPipelineParameters pipelineParameters;
- (void)dealloc;
- (id)pipelineParameters;
- (int)compressionProfile;
- (id)initWithSettings:configuration:sourceNodePixelBufferAttributes:;
- (void)addPhotoDescriptor:;
- (void)addBuffer:bufferType:captureFrameFlags:metadata:rawThumbnailsBuffer:rawThumbnailsMetadata:portType:;
- (void)addDictionary:tag:;
- (void)_addInferenceBuffer:inferenceAttachedMediaKey:portType:;
- (void)_addInference:inferenceAttachmentKey:portType:;
- (void)_addDictionary:tag:;
- (void)encounteredProcessingError:;
- (void)proxyBufferReady;
- (id)captureContainer;
- (int)processingError;
- (void)setProcessingError:;
@end
