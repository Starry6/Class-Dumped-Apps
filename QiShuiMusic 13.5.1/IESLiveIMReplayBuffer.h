@interface IESLiveIMReplayBuffer : NSObject
@property (nonatomic) q replayArrayMaxSize;
@property (nonatomic) NSMutableArray replayMessageArray;
- (void)addMessageToBuffer:;
- (id)initWithMaxBufferSize:;
- (long long)replayArrayMaxSize;
- (id)replayMessageArray;
- (void)setReplayArrayMaxSize:;
- (void)setReplayMessageArray:;
- (id)init;
- (void).cxx_destruct;
- (void)clearBuffer;
@end
