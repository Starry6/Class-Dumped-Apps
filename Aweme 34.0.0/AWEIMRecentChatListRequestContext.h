@interface AWEIMRecentChatListRequestContext : NSObject
@property (nonatomic) q limit;
@property (nonatomic) BOOL filterNotFriendUser;
@property (nonatomic) @? requestCompletion;
- (void)setFilterNotFriendUser:;
- (BOOL)filterNotFriendUser;
- (long long)limit;
- (void)setLimit:;
- (void).cxx_destruct;
- (id)requestCompletion;
- (void)setRequestCompletion:;
@end
