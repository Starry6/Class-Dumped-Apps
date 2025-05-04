@interface AWELuckyCatReadTaskSocialCommentIncentiveTaskExtraInfo : MTLModel
@property (nonatomic) q commentCountLimit;
@property (nonatomic) q videoPlayPercent;
@property (nonatomic) q longVideoPlayPercent;
@property (nonatomic) q longVideoPlayTime;
@property (nonatomic) q launchSkipVVCount;
@property (nonatomic) q gapSkipVVCount;
@property (nonatomic) q guideDailyLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)commentCountLimit;
- (void)setCommentCountLimit:;
- (long long)videoPlayPercent;
- (void)setVideoPlayPercent:;
- (long long)longVideoPlayPercent;
- (void)setLongVideoPlayPercent:;
- (long long)longVideoPlayTime;
- (void)setLongVideoPlayTime:;
- (long long)launchSkipVVCount;
- (void)setLaunchSkipVVCount:;
- (long long)gapSkipVVCount;
- (void)setGapSkipVVCount:;
- (long long)guideDailyLimit;
- (void)setGuideDailyLimit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
