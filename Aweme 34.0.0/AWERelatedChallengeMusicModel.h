@interface AWERelatedChallengeMusicModel : AWEBaseApiModel
@property (nonatomic) AWEMusicModel musicModel;
@property (nonatomic) AWEChallengeModel challengeModel;
@property (nonatomic) Q type;
- (id)musicModel;
- (void)setMusicModel:;
- (id)challengeModel;
- (void)setChallengeModel:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)musicModelJSONTransformer;
+ (id)challengeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
