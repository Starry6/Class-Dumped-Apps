@interface BWSceneClassifierSinkNode : BWSinkNode
@property (nonatomic) <BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) <BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (nonatomic) NSArray sceneConfidences;
- (void)dealloc;
- (void)setMRCSceneObserver:;
- (id)semanticStyleSceneObserver;
- (id)initWithCaptureDevice:version:semanticStyleSceneDetectionEnabled:sinkID:;
- (id)confidenceStringForScene:;
- (void)setSemanticStyleSceneObserver:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)mrcSceneObserver;
- (id)sceneConfidences;
- (id)nodeSubType;
@end
