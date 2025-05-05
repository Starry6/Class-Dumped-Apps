@interface IESIMChallengeInterveneModel : IESIMBaseApiModel
@property (nonatomic) IESIMChallengeModel challenge;
@property (nonatomic) q position;
@property (nonatomic) Q labelType;
@property (nonatomic) IESIMChallengeInterveneAdModel adData;
- (void)setPosition:;
- (void)setChallenge:;
- (long long)position;
- (void)setLabelType:;
- (unsigned long long)labelType;
- (void)setAdData:;
- (void).cxx_destruct;
- (id)adData;
- (id)challenge;
+ (id)adDataJSONTransformer;
+ (id)challengeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
