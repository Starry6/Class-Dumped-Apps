@interface AWEIMLiveGroupRequestManager : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSMutableSet waitForRequestSet;
@property (nonatomic) NSMutableSet inProcessRequestSet;
@property (nonatomic) @? updateLiveGroupInfoBlock;
@property (nonatomic) BOOL avatarNeeded;
- (void)addToAggregatedRequest:;
- (void)setUpdateLiveGroupInfoBlock:;
- (id)waitForRequestSet;
- (id)inProcessRequestSet;
- (void)p_fetchNumberOfPeople;
- (void)setAvatarNeeded:;
- (BOOL)avatarNeeded;
- (id)updateLiveGroupInfoBlock;
- (void)transferWaitToInProcess;
- (void)setWaitForRequestSet:;
- (void)setInProcessRequestSet:;
- (void)setTimer:;
- (id)timer;
- (void).cxx_destruct;
- (void)changeCurrentPage:;
@end
