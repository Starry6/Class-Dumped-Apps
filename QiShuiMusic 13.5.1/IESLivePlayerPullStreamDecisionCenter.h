@interface IESLivePlayerPullStreamDecisionCenter : NSObject
@property (nonatomic) BOOL forbidPullStreamByTimedOff;
@property (nonatomic) Q backgroundNetCardStage;
@property (nonatomic) @? timeOffTotalCountTimeBlock;
- (unsigned long long)backgroundNetCardStage;
- (BOOL)forbidPullStreamByTimedOff;
- (id)reasonForBackgroundLimitPlayStrategy;
- (void)setBackgroundNetCardStage:;
- (void)setBackgroundNetCardStage:callTrace:;
- (void)setForbidPullStreamByTimedOff:;
- (void)setForbidPullStreamByTimedOff:callTrace:;
- (void)setTimeOffTotalCountTimeBlock:;
- (BOOL)shouldForbidPullStream;
- (BOOL)shouldHitBackgroundLimitPlayStrategy;
- (id)timeOffTotalCountTimeBlock;
- (long long)timeOffTotalCountTimeSeconds;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
+ (BOOL)enablePullStreamDecisionCenterOn;
@end
