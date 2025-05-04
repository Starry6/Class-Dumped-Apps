@interface AWEDTOChallengeModel : MTLModel
@property (nonatomic) <ACCChallengeModelProtocol> challenge;
@property (nonatomic) BOOL didHandleChallengeBind;
@property (nonatomic) NSArray currentBindChallengeInfos;
@property (nonatomic) NSString challengeIdsFromSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)didHandleChallengeBind;
- (void)setDidHandleChallengeBind:;
- (id)currentBindChallengeInfos;
- (void)setCurrentBindChallengeInfos:;
- (id)challengeIdsFromSchema;
- (void)setChallengeIdsFromSchema:;
- (id)challenge;
- (void)setChallenge:;
- (void).cxx_destruct;
+ (id)currentBindChallengeInfosJSONTransformer;
+ (id)challengeJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;
@end
