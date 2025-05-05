@interface BWCompressedShotBufferNode : BWNode
@property (nonatomic) NSInteger uncompressedEquivalentCapacity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)handleStillImagePrewarmWithSettings:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)handleNodeError:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (void)flushAndWaitForUncompressedEquivalentFreeBufferCount:;
- (int)uncompressedEquivalentCapacity;
- (void)setUncompressedEquivalentCapacity:;
@end
