@interface AWEIMMutedGroupMentionInnerPushThrottler : NSObject
@property (nonatomic) NSMutableArray throttleQueue;
@property (nonatomic) double duration;
@property (nonatomic) q capacity;
@property (nonatomic) AWEIMChatModel latestChatModel;
@property (nonatomic) BOOL isThrottling;
@property (nonatomic) @? latestPushAction;
- (id)latestChatModel;
- (void)clearThrottleQueue;
- (id)initWithCapacity:inDuration:;
- (BOOL)isThrottling;
- (id)latestPushAction;
- (void)setIsThrottling:;
- (void)setLatestChatModel:;
- (void)setLatestPushAction:;
- (void)throttleModel:withAction:;
- (long long)capacity;
- (void)setCapacity:;
- (id)throttleQueue;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)reset;
- (double)duration;
- (void)setThrottleQueue:;
@end
