@interface BDMannorSplashStatusContext : NSObject
@property (nonatomic) TTAdSplashModel model;
@property (nonatomic) q jumpType;
@property (nonatomic) Q breakReason;
@property (nonatomic) q semiRealtimeFinishReason;
@property (nonatomic) q jumpAnimationType;
- (void)setBreakReason:;
- (unsigned long long)breakReason;
- (long long)jumpAnimationType;
- (long long)jumpType;
- (long long)semiRealtimeFinishReason;
- (void)setJumpAnimationType:;
- (void)setJumpType:;
- (void)setSemiRealtimeFinishReason:;
- (id)model;
- (id)init;
- (void)setModel:;
- (void).cxx_destruct;
@end
