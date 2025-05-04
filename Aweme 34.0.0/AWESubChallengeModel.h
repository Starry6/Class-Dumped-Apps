@interface AWESubChallengeModel : MTLModel
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
- (id)subChallengeID;
- (void)setSubChallengeID:;
- (id)subChallengeName;
- (void)setSubChallengeName:;
- (id)subChallengeDescription;
- (void)setSubChallengeDescription:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
