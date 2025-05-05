@interface IESLiveRevenueInteractPlayTeamModel : NSObject
@property (nonatomic) NSNumber teamId;
@property (nonatomic) NSString scoreText;
@property (nonatomic) NSNumber score;
@property (nonatomic) q rankIndex;
@property (nonatomic) BOOL isRelativeScoreText;
- (BOOL)isRelativeScoreText;
- (long long)rankIndex;
- (id)scoreText;
- (void)setIsRelativeScoreText:;
- (void)setRankIndex:;
- (void)setScoreText:;
- (void)setTeamId:;
- (id)score;
- (id)teamId;
- (void)setScore:;
- (void).cxx_destruct;
@end
