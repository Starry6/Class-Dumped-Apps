@interface AWELiveAcqCastVideoSearchUserManager : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) NSArray userList;
- (id)logPassback;
- (void)setLogPassback:;
- (id)userList;
- (id)initWithKeyword:;
- (void)setUserList:;
- (BOOL)hitLimit;
- (void)setHitLimit:;
- (void)loadMoreUser:;
- (id)cursor;
- (void)setTask:;
- (void)setHasMore:;
- (id)task;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
@end
