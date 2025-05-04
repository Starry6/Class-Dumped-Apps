@interface AWELiveLinkMicBattleSettingModel : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) q battleID;
@property (nonatomic) q playMode;
@property (nonatomic) q teamMode;
@property (nonatomic) q activityMode;
- (long long)battleID;
- (long long)teamMode;
- (void)setBattleID:;
- (void)setTeamMode:;
- (BOOL)finished;
- (void)setFinished:;
- (long long)activityMode;
- (void)setActivityMode:;
- (long long)playMode;
- (void)setPlayMode:;
@end
