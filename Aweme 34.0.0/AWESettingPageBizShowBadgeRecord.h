@interface AWESettingPageBizShowBadgeRecord : NSObject
@property (nonatomic) q continuousShowBadgeTimes;
@property (nonatomic) double latestShowBadgeTime;
- (long long)continuousShowBadgeTimes;
- (double)latestShowBadgeTime;
- (void)setContinuousShowBadgeTimes:;
- (void)setLatestShowBadgeTime:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithCoder:;
@end
