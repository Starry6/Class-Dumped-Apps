@interface DMTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) @? fireBlock;
@property (nonatomic) Q secondsBeforeFirstFire;
@property (nonatomic) Q secondsOfLeeway;
- (void)cancel;
- (void)setTimer:;
- (void)resume;
- (id)fireBlock;
- (void).cxx_destruct;
- (id)timer;
- (void)setFireBlock:;
- (id)initWithSecondsBeforeFirstFire:secondsOfLeeway:fireBlock:;
- (void)cancelSynchronously;
- (unsigned long long)secondsBeforeFirstFire;
- (void)setSecondsBeforeFirstFire:;
- (unsigned long long)secondsOfLeeway;
- (void)setSecondsOfLeeway:;
@end
