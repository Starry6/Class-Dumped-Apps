@interface AWEAntiAddictForceMaskAction : AWEAntiAddictBaseAction
@property (nonatomic) double countDownTime;
@property (nonatomic) double blockToTime;
@property (nonatomic) BOOL oldMask;
@property (nonatomic) q satisfiedStrategyIndex;
@property (nonatomic) <AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;
- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (long long)satisfiedStrategyIndex;
- (void)setCountDownTime:;
- (void)setBlockToTime:;
- (void)setOldMask:;
- (void)postInsertFeedNotificationInfo:;
- (double)countDownTime;
- (double)blockToTime;
- (BOOL)oldMask;
- (id)satisfiedStrategy;
- (void)postDeleteFeedNotification;
- (void)setSatisfiedStrategyIndex:;
- (void)setSatisfiedStrategy:;
- (void)begin;
- (void)end;
- (void)prepare;
- (void).cxx_destruct;
- (void)revoke;
+ (id)moduleName;
@end
