@interface AWELiveLeagueInfo : AWEBaseApiModel
@property (nonatomic) q leagueId;
@property (nonatomic) NSString cnnName;
@property (nonatomic) NSString ennName;
@property (nonatomic) NSString season;
- (void)setLeagueId:;
- (id)cnnName;
- (void)setCnnName:;
- (id)ennName;
- (void)setEnnName:;
- (void).cxx_destruct;
- (id)season;
- (void)setSeason:;
- (long long)leagueId;
+ (id)JSONKeyPathsByPropertyKey;
@end
