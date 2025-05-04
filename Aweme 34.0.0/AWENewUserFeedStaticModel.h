@interface AWENewUserFeedStaticModel : NSObject
@property (nonatomic) NSString gid;
@property (nonatomic) Q action;
@property (nonatomic) q channel_id;
@property (nonatomic) q action_time;
@property (nonatomic) NSString follow_user_id;
- (void)setAction_time:;
- (void)setChannel_id:;
- (void)setFollow_user_id:;
- (long long)channel_id;
- (id)stringForReport;
- (id)follow_user_id;
- (long long)action_time;
- (id)gid;
- (void)setGid:;
- (void)setAction:;
- (unsigned long long)action;
- (void).cxx_destruct;
@end
