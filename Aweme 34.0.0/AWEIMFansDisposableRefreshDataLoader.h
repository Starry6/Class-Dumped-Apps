@interface AWEIMFansDisposableRefreshDataLoader : NSObject
@property (nonatomic) BOOL canUseCache;
@property (nonatomic) BOOL hasRefreshedUseServer;
@property (nonatomic) NSArray cacheFansNotice;
@property (nonatomic) NSArray serverFansNotice;
@property (nonatomic) NSObject<OS_dispatch_group> group;
@property (nonatomic) NSError noticeError;
@property (nonatomic) BOOL byPullDown;
- (void)setCanUseCache:;
- (BOOL)hasRefreshedUseServer;
- (void)setHasRefreshedUseServer:;
- (id)cacheFansNotice;
- (void)setCacheFansNotice:;
- (id)serverFansNotice;
- (void)setServerFansNotice:;
- (id)noticeError;
- (void)setNoticeError:;
- (BOOL)byPullDown;
- (void)setByPullDown:;
- (BOOL)canUseCache;
- (void)setGroup:;
- (id)group;
- (void).cxx_destruct;
@end
