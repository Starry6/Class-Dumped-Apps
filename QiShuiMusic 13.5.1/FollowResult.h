@interface FollowResult : NSObject
@property (nonatomic) q status;
@property (nonatomic) q postNotificationStatus;
- (id)initWithStatus:postNotificationStatus:;
- (long long)postNotificationStatus;
- (void)setPostNotificationStatus:;
- (void)setStatus:;
- (long long)status;
@end
