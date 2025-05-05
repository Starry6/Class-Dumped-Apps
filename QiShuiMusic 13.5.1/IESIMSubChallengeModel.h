@interface IESIMSubChallengeModel : MTLModel
@property (nonatomic) NSString subChallengeID;
@property (nonatomic) NSString subChallengeName;
@property (nonatomic) NSString subChallengeDescription;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCommerce;
- (void)setIsCommerce:;
- (void)setSubChallengeDescription:;
- (void)setSubChallengeID:;
- (void)setSubChallengeName:;
- (id)subChallengeDescription;
- (id)subChallengeID;
- (id)subChallengeName;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
