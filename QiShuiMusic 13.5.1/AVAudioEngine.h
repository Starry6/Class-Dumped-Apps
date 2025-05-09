@interface AVAudioEngine : NSObject
@property (nonatomic) ^{OpaqueMusicSequence=} musicSequence;
@property (nonatomic) AVAudioOutputNode outputNode;
@property (nonatomic) AVAudioInputNode inputNode;
@property (nonatomic) AVAudioMixerNode mainMixerNode;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL autoShutdownEnabled;
@property (nonatomic) NSSet attachedNodes;
@property (nonatomic) @? manualRenderingBlock;
@property (nonatomic) BOOL isInManualRenderingMode;
@property (nonatomic) q manualRenderingMode;
@property (nonatomic) AVAudioFormat manualRenderingFormat;
@property (nonatomic) I manualRenderingMaximumFrameCount;
@property (nonatomic) q manualRenderingSampleTime;
- (unsigned int)manualRenderingMaximumFrameCount;
- (id)outputNode;
- (id)init;
- (void)dealloc;
- (id)inputNode;
- (id)implementation;
- (void)connect:toConnectionPoints:fromBus:format:;
- (long long)manualRenderingSampleTime;
- (id)mainMixerNode;
- (void)stop;
- (void)connect:to:format:;
- (void)connectMIDI:to:format:eventListBlock:;
- (void)prepare;
- (id)attachedNodes;
- (BOOL)isRunning;
- (void)connectMIDI:toNodes:format:block:;
- (id)inputConnectionPointForNode:inputBus:;
- (BOOL)enableManualRenderingMode:format:maximumFrameCount:error:;
- (void)detachNode:;
- (void)disconnectMIDI:fromNodes:;
- (id)outputConnectionPointsForNode:outputBus:;
- (void)connectMIDI:toNodes:format:eventListBlock:;
- (BOOL)isAutoShutdownEnabled;
- (id)musicSequence;
- (id)manualRenderingBlock;
- (BOOL)isInManualRenderingMode;
- (void)attachNode:;
- (void)disconnectNodeOutput:bus:;
- (void)setMusicSequence:;
- (void)disconnectNodeOutput:;
- (long long)manualRenderingMode;
- (long long)renderOffline:toBuffer:error:;
- (BOOL)startAndReturnError:;
- (void)reset;
- (void)disconnectNodeInput:bus:;
- (void)disconnectMIDI:from:;
- (void)disconnectMIDIOutput:;
- (id)description;
- (void)setAutoShutdownEnabled:;
- (void)disableManualRenderingMode;
- (void)pause;
- (void)connect:to:fromBus:toBus:format:;
- (void)disconnectNodeInput:;
- (void)connectMIDI:to:format:block:;
- (id)manualRenderingFormat;
- (void)disconnectMIDIInput:;
@end
