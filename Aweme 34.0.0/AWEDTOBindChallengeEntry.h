@interface AWEDTOBindChallengeEntry : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString moduleKey;
@property (nonatomic) NSString orderIndex;
@property (nonatomic) NSString challengeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)challengeName;
- (void)setChallengeName:;
- (id)moduleKey;
- (void)setModuleKey:;
- (id)itemID;
- (void)setItemID:;
- (id)orderIndex;
- (void).cxx_destruct;
- (void)setOrderIndex:;
+ (id)JSONKeyPathsByPropertyKey;
@end
