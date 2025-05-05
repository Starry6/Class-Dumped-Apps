@interface BWRemoteQueueSinkNode : BWSinkNode
@property (nonatomic) <BWRemoteQueueSinkNodeDelegate> delegate;
- (BOOL)attachPanoramaMetadata;
- (void)registerSurfacesFromSourcePool:;
- (void)dealloc;
- (void)setPanoramaRequiresLTMLocking:;
- (BOOL)sceneStabilityMetadataEnabled;
- (BOOL)cameraSupportsFlash;
- (void)handleDroppedSample:forInput:;
- (void)setDelegate:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)setCameraSupportsFlash:;
- (void)setAttachPanoramaMetadata:;
- (int)clientVideoRetainedBufferCount;
- (void)setDiscardsLateSampleBuffers:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (id)delegate;
- (void)renderSampleBuffer:forInput:;
- (void)setSceneStabilityMetadataEnabled:;
- (void)setClientVideoRetainedBufferCount:;
- (void)setRemoveCameraIntrinsicMatrixAttachment:;
- (BOOL)discardsLateSampleBuffers;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (BOOL)panoramaRequiresLTMLocking;
- (id)nodeSubType;
- (id)initWithMediaType:clientAuditToken:sinkID:;
@end
