@interface AWEFollowUserUnreadModel : NSObject
@property (nonatomic) q unreadCount;
@property (nonatomic) BOOL hasEnteredDetail;
- (BOOL)hasEnteredDetail;
- (void)setHasEnteredDetail:;
- (long long)unreadCount;
- (id)init;
- (void)setUnreadCount:;
@end
