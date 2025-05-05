@interface IESIMSearchChallengeModel : IESIMBaseApiModel
@property (nonatomic) IESIMChallengeModel challenge;
@property (nonatomic) NSArray hightlightPositions;
@property (nonatomic) IESIMChallengeInterveneAdModel adData;
@property (nonatomic) NSArray videos;
- (id)hightlightPositions;
- (void)setHightlightPositions:;
- (void)setChallenge:;
- (unsigned long long)hash;
- (void)setAdData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)adData;
- (id)challenge;
- (id)videos;
- (void)setVideos:;
+ (id)challengeJSONTransformer;
+ (id)hightlightPositionsJSONTransformer;
+ (id)videosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
