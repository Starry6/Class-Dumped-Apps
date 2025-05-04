@interface AWELiveVSMatchData : AWEBaseApiModel
@property (nonatomic) NSString matchID;
@property (nonatomic) NSString matchTitle;
@property (nonatomic) q startedTimeUnix;
@property (nonatomic) q matchStatus;
@property (nonatomic) AWELiveVSAgainst against;
- (id)against;
- (long long)startedTimeUnix;
- (void)setMatchTitle:;
- (void)setStartedTimeUnix:;
- (void)setAgainst:;
- (long long)matchStatus;
- (void).cxx_destruct;
- (void)setMatchStatus:;
- (id)matchID;
- (id)matchTitle;
- (void)setMatchID:;
+ (id)againstJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
