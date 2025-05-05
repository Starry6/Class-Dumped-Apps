@interface IESIMUserFansPushModel : IESIMBaseApiModel
@property (nonatomic) q blockUrgeSetting;
@property (nonatomic) q urgeUnreadCount;
@property (nonatomic) q userUrged;
@property (nonatomic) NSNumber latestAwemeTime;
@property (nonatomic) NSNumber latestLiveTime;
- (id)latestAwemeTime;
- (long long)urgeUnreadCount;
- (long long)blockUrgeSetting;
- (id)latestLiveTime;
- (void)setBlockUrgeSetting:;
- (void)setLatestAwemeTime:;
- (void)setLatestLiveTime:;
- (void)setUrgeUnreadCount:;
- (void)setUserUrged:;
- (long long)userUrged;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
