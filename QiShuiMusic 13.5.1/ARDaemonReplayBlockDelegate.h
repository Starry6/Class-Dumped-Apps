@interface ARDaemonReplayBlockDelegate : NSObject
@property (nonatomic) @? replayFailedBlock;
@property (nonatomic) @? replayStartedBlock;
@property (nonatomic) @? replayUpdatedBlock;
@property (nonatomic) @? replayStoppedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)replayDidFailWithError:;
- (void)replayDidStartWithReplayTime:;
- (void)replayDidUpdateResource:withKey:atTime:;
- (void)replayDidStop;
- (id)replayFailedBlock;
- (void)setReplayFailedBlock:;
- (id)replayStartedBlock;
- (void)setReplayStartedBlock:;
- (id)replayUpdatedBlock;
- (void)setReplayUpdatedBlock:;
- (id)replayStoppedBlock;
- (void)setReplayStoppedBlock:;
@end
