@interface AWEChallengeInterveneModel : AWEBaseApiModel
@property (nonatomic) AWEChallengeModel challenge;
@property (nonatomic) q position;
@property (nonatomic) Q labelType;
@property (nonatomic) AWEChallengeInterveneAdModel adData;
@property (nonatomic) AWEChallengeInterveneHotSpotInfoModel hotSpotInfo;
- (id)hotSpotInfo;
- (void)setHotSpotInfo:;
- (unsigned long long)labelType;
- (void)setLabelType:;
- (long long)position;
- (id)challenge;
- (id)adData;
- (void)setChallenge:;
- (void).cxx_destruct;
- (void)setAdData:;
- (void)setPosition:;
+ (id)challengeJSONTransformer;
+ (id)adDataJSONTransformer;
+ (id)hotSpotInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
