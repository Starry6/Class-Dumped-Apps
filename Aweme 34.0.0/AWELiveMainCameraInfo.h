@interface AWELiveMainCameraInfo : AWEBaseApiModel
@property (nonatomic) NSNumber vsContentId;
@property (nonatomic) AWELiveVSMatchData matchData;
@property (nonatomic) q matchId;
@property (nonatomic) NSArray eventIdList;
@property (nonatomic) q contentId;
@property (nonatomic) AWELiveLeagueInfo leagueInfo;
@property (nonatomic) BOOL isDisplayScore;
- (long long)matchId;
- (void)setMatchId:;
- (BOOL)isDisplayScore;
- (id)vsContentId;
- (void)setVsContentId:;
- (id)eventIdList;
- (void)setEventIdList:;
- (id)leagueInfo;
- (void)setLeagueInfo:;
- (void)setIsDisplayScore:;
- (void).cxx_destruct;
- (void)setContentId:;
- (long long)contentId;
- (id)matchData;
- (void)setMatchData:;
+ (id)matchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
