@interface AWEIMActiveUserAcquirerConfig : NSObject
@property (nonatomic) @? requestTimeIntervalCallback;
@property (nonatomic) NSString forceFetchSourceKey;
@property (nonatomic) NSString loopFetchSourceKey;
@property (nonatomic) BOOL allowProcessNonFriendsInfo;
- (void)setForceFetchSourceKey:;
- (void)setLoopFetchSourceKey:;
- (void)setAllowProcessNonFriendsInfo:;
- (id)requestTimeIntervalCallback;
- (id)forceFetchSourceKey;
- (id)loopFetchSourceKey;
- (BOOL)allowProcessNonFriendsInfo;
- (void)setRequestTimeIntervalCallback:;
- (id)init;
- (void).cxx_destruct;
@end
