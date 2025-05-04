@interface AWESearchAllManager : AWESearchBaseManager
- (void)followUser:completion:;
- (void)unfollowUser:completion:;
- (void)followUser:channelID:completion:;
- (void)unfollowUser:channelID:completion:;
@end
