@interface AWEUserFansPushModel : AWEBaseApiModel
@property (nonatomic) q blockUrgeSetting;
@property (nonatomic) q urgeUnreadCount;
@property (nonatomic) q userUrged;
@property (nonatomic) NSNumber latestAwemeTime;
@property (nonatomic) NSNumber latestLiveTime;
@property (nonatomic) AWEProfileUrgeControlModel urgeControlMap;
- (long long)userUrged;
- (void)setUserUrged:;
- (id)latestLiveTime;
- (long long)blockUrgeSetting;
- (void)setBlockUrgeSetting:;
- (long long)urgeUnreadCount;
- (id)latestAwemeTime;
- (void)setLatestLiveTime:;
- (void)setUrgeUnreadCount:;
- (void)setLatestAwemeTime:;
- (id)urgeControlMap;
- (void)setUrgeControlMap:;
- (void).cxx_destruct;
+ (id)urgeControlMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
