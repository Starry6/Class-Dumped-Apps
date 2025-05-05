@interface TLAlertContext : NSObject
@property (nonatomic) q playbackBackEnd;
@property (nonatomic) NSObject<OS_dispatch_source> timeoutTimerSource;
@property (nonatomic) BOOL beingInterrupted;
- (void).cxx_destruct;
- (long long)playbackBackEnd;
- (void)setPlaybackBackEnd:;
- (id)timeoutTimerSource;
- (void)setTimeoutTimerSource:;
- (BOOL)isBeingInterrupted;
- (void)setBeingInterrupted:;
@end
