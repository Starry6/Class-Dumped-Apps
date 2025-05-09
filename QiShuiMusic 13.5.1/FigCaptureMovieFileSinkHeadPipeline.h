@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline
@property (nonatomic) <BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) <BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (nonatomic) NSString videoConnectionID;
@property (nonatomic) NSString videoSourceID;
@property (nonatomic) NSInteger videoSourceDeviceType;
@property (nonatomic) BWIrisStagingNode irisStagingNode;
@property (nonatomic) BWFileCoordinatorNode fileCoordinatorNode;
@property (nonatomic) BWVideoOrientationMetadataNode videoOrientationMetadataNode;
@property (nonatomic) BWPhotoDecompressorNode irisIntermediateJPEGPhotoDecompressorNode;
@property (nonatomic) BWVideoDefringingNode videoDefringingNode;
@property (nonatomic) BWNodeOutput videoOutput;
@property (nonatomic) BWNodeOutput audioOutput;
@property (nonatomic) NSArray metadataOutputs;
@property (nonatomic) NSArray indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic) NSInteger indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic) NSArray inferenceConnections;
@property (nonatomic) BOOL sceneClassifierSuspended;
- (void)dealloc;
- (id)videoOutput;
- (void)setMRCSceneObserver:;
- (id)semanticStyleSceneObserver;
- (int)videoSourceDeviceType;
- (id)irisStagingNode;
- (id)videoDefringingNode;
- (id)videoOrientationMetadataNode;
- (int)indexOfVideoOrientationInMetadataOutputs;
- (id)fileCoordinatorNode;
- (id)videoConnectionID;
- (void)setSemanticStyleSceneObserver:;
- (BOOL)sceneClassifierSuspended;
- (id)inferenceConnections;
- (id)initWithConfiguration:videoSourceCaptureOutput:audioSourceCaptureOutput:detectedObjectBoxedMetadataOutputs:objectDetectionSourceOutput:metadataSourcePipelineOutputs:graph:parentPipeline:inferenceScheduler:captureDevice:audioSourceDelegate:fileCoordinatorStatusDelegate:irisRequestDelegate:masterClock:workgroup:;
- (id)videoSourceID;
- (id)indexesOfDetectedObjectsInMetadataOutputs;
- (id)metadataOutputs;
- (id)mrcSceneObserver;
- (id)audioOutput;
- (void)setSceneClassifierSuspended:;
- (id)irisIntermediateJPEGPhotoDecompressorNode;
@end
