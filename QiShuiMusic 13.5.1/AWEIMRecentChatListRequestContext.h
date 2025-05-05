@interface AWEIMRecentChatListRequestContext : NSObject
@property (nonatomic) q limit;
@property (nonatomic) BOOL filterNotFriendUser;
@property (nonatomic) @? requestCompletion;
- (BOOL)filterNotFriendUser;
- (void)setFilterNotFriendUser:;
- (long long)limit;
- (void)setLimit:;
- (void).cxx_destruct;
- (id)requestCompletion;
- (void)setRequestCompletion:;
@end
