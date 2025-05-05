@interface HTSLiveLinkmicTeamfightTeamInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mixOwnerId;
@property (nonatomic) q teamId;
@property (nonatomic) q score;
@property (nonatomic) NSString scoreStr;
@property (nonatomic) NSString scoreFuzzy;
@property (nonatomic) HTSLiveLinkmicTeamfightContributors contributors;
@property (nonatomic) BOOL hasContributors;
@property (nonatomic) NSMutableArray playersArray;
@property (nonatomic) Q playersArray_Count;
@property (nonatomic) BOOL isScoreFuzzy;
@property (nonatomic) NSString ownerOpenId;
@property (nonatomic) NSString teamIdStr;
@property (nonatomic) HTSLiveLinkmicTeamfightBonusInfo bonusInfo;
@property (nonatomic) BOOL hasBonusInfo;
@property (nonatomic) NSString bonusScore;
@property (nonatomic) HTSLiveTeamContributorTopList teamContributorTopList;
@property (nonatomic) BOOL hasTeamContributorTopList;
@property (nonatomic) GPBInt64Array positionListArray;
@property (nonatomic) Q positionListArray_Count;
@property (nonatomic) q maxMember;
- (id)mixOwnerId;
- (void)setMixOwnerId:;
+ (id)descriptor;
@end
