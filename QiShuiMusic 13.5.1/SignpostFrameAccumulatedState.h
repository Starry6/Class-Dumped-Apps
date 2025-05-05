@interface SignpostFrameAccumulatedState : NSObject
@property (nonatomic) I frameSeed;
@property (nonatomic) NSMutableDictionary contextIDtoContextInfoDict;
@property (nonatomic) SignpostRenderServerRenderInterval renderInterval;
@property (nonatomic) NSMutableDictionary frameSeedToSkippedRenderIntervals;
@property (nonatomic) SignpostHIDLatencyInterval hidLatency;
@property (nonatomic) SignpostFrameLatencyInterval frameLatency;
- (void).cxx_destruct;
- (id)initWithFrameSeed:;
- (void)_addSkippedRender:;
- (unsigned int)frameSeed;
- (id)contextIDtoContextInfoDict;
- (void)setContextIDtoContextInfoDict:;
- (id)renderInterval;
- (void)setRenderInterval:;
- (id)frameSeedToSkippedRenderIntervals;
- (void)setFrameSeedToSkippedRenderIntervals:;
- (id)hidLatency;
- (void)setHidLatency:;
- (id)frameLatency;
- (void)setFrameLatency:;
@end
