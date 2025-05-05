@interface IESLiveThemedCompetitionInfo : IESLivePBBaseMessage
@property (nonatomic) NSDictionary mixUserIdToScore;
@property (nonatomic) IESLiveThemedCompetitionSetting setting;
@property (nonatomic) BOOL hasSetting;
@property (nonatomic) NSMutableDictionary userIdToScore;
@property (nonatomic) Q userIdToScore_Count;
@property (nonatomic) NSInteger status;
@property (nonatomic) q competitionId;
@property (nonatomic) NSString currentPerformerOpenId;
- (id)mixUserIdToScore;
+ (id)descriptor;
@end
