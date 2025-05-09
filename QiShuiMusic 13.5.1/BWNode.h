@interface BWNode : NSObject
@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks;
@property (nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) NSString name;
@property (nonatomic) NSString subgraphName;
@property (nonatomic) NSString nodeType;
@property (nonatomic) NSString nodeSubType;
@property (nonatomic) NSArray inputs;
@property (nonatomic) NSArray outputs;
@property (nonatomic) BWNodeInput input;
@property (nonatomic) BWNodeOutput output;
@property (nonatomic) <BWNodeRenderDelegate> renderDelegate;
@property (nonatomic) BOOL hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph graph;
@property (nonatomic) NSInteger deferredPreparePriority;
- (id)graph;
- (id)output;
- (void)setConfigurationID:;
- (void)setGraph:;
- (void)suspendResources;
- (long long)configurationID;
- (id)inputs;
- (id)input;
- (id)init;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)setName:;
- (void)handleDroppedSample:forInput:;
- (void)handleStillImagePrewarmWithSettings:forInput:;
- (id)nodeType;
- (void)setRenderDelegate:;
- (void)_handleMessage:fromInput:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)makeCurrentConfigurationLive;
- (BOOL)hasNonLiveConfigurationChanges;
- (id)outputs;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)addInput:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)supportsLiveReconfiguration;
- (id)description;
- (void)addOutput:;
- (id)name;
- (void)didSelectFormat:forOutput:;
- (id)nodeSubType;
- (id)renderDelegate;
- (void)didSelectFormat:forOutput:forAttachedMediaKey:;
- (BOOL)allInputsHaveReachedState:;
- (id)subgraphName;
- (void)setSubgraphName:;
- (int)deferredPreparePriority;
- (void)setDeferredPreparePriority:;
- (BOOL)supportsConcurrentLiveInputCallbacks;
- (void)setSupportsConcurrentLiveInputCallbacks:;
- (void)setSupportsLiveReconfiguration:;
@end
