@interface AWEIMMangoGroupIncentiveSettingConfig : NSObject
@property (nonatomic) double mangoChallengeStartTime;
@property (nonatomic) double mangoChallengeEndTime;
@property (nonatomic) NSString noticeContentText;
@property (nonatomic) NSString noticeActionText;
@property (nonatomic) NSSet mangoExtGroupOnSet;
@property (nonatomic) BOOL noticeEnable;
@property (nonatomic) BOOL canShowGroupIncentiveEstablishedAnimation;
@property (nonatomic) BOOL enableShowF2FMainPartReward;
- (void)setNoticeContentText:;
- (BOOL)canShowGroupIncentiveEstablishedAnimation;
- (id)noticeContentText;
- (BOOL)enableShowF2FMainPartReward;
- (id)mangoExtGroupOnSet;
- (BOOL)noticeEnable;
- (id)noticeActionText;
- (void)setNoticeActionText:;
- (void)setMangoChallengeStartTime:;
- (void)setMangoChallengeEndTime:;
- (void)setMangoExtGroupOnSet:;
- (void)setNoticeEnable:;
- (void)setCanShowGroupIncentiveEstablishedAnimation:;
- (void)setEnableShowF2FMainPartReward:;
- (double)mangoChallengeStartTime;
- (double)mangoChallengeEndTime;
- (void).cxx_destruct;
+ (id)getAWEIMMangoGroupIncentiveSettingConfig;
+ (BOOL)isInSevenDaysChallengeTime;
@end
