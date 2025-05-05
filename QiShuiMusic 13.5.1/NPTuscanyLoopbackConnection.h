@interface NPTuscanyLoopbackConnection : NSObject
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} protocol;
@property (nonatomic) Q currentBlobSizeIndex;
@property (nonatomic) BOOL waitingForOutput;
- (id)protocol;
- (id)init;
- (void)dealloc;
- (void)handleDetachedFromProtocol;
- (unsigned int)addOutputFramesToArray:maximumBytes:minimumBytes:maximumFrameCount:;
- (unsigned int)addInputFramesToArray:maximumBytes:minimumBytes:maximumFrameCount:;
- (void)handleOutputFrame:;
- (void)notifyInputHandler;
- (unsigned long long)currentBlobSizeIndex;
- (void)setCurrentBlobSizeIndex:;
- (BOOL)waitingForOutput;
- (void)setWaitingForOutput:;
@end
