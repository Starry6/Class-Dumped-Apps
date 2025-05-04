@interface AWEMultipleChallengeResponse : AWEBaseApiModel
@property (nonatomic) NSArray challengeList;
- (id)challengeList;
- (void)setChallengeList:;
- (void).cxx_destruct;
+ (id)challengeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
