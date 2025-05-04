@interface AWELiveChallengeModel : AWEBaseApiModel
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString challengeName;
@property (nonatomic) BOOL isCommerce;
- (BOOL)isCommerce;
- (void)setIsCommerce:;
- (id)challengeName;
- (void)setChallengeName:;
- (void).cxx_destruct;
- (id)challengeID;
- (void)setChallengeID:;
+ (id)parseChallengeModelFromJson:;
+ (id)JSONKeyPathsByPropertyKey;
@end
