@interface HTSLiveMainCameraMatchInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveToutiaoMatchData matchData;
@property (nonatomic) BOOL hasMatchData;
@property (nonatomic) q matchId;
@property (nonatomic) GPBInt64Array eventIdsArray;
@property (nonatomic) Q eventIdsArray_Count;
@property (nonatomic) q contentId;
@property (nonatomic) HTSLiveLeagueInfo leagueInfo;
@property (nonatomic) BOOL hasLeagueInfo;
@property (nonatomic) BOOL isDisplayScoreType;
@property (nonatomic) GPBInt64Array hideTabIdsArray;
@property (nonatomic) Q hideTabIdsArray_Count;
+ (id)descriptor;
@end
