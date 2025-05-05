@interface IESLiveWaitingListRefreshStrategyService : NSObject
@property (nonatomic) NSArray waitingList;
@property (nonatomic) NSArray waitingListByStrategy;
@property (nonatomic) IESLiveGCDTimer timer;
- (void)freeTimerIfNeed;
- (void)setWaitingList:;
- (void)creatTimerIfNeed;
- (long long)currentRefreshStrategy;
- (void)setWaitingListByStrategy:;
- (void)updateWaitingList:;
- (id)waitingList;
- (id)waitingListByStrategy;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
@end
