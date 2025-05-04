@interface AWEProfileDogCardModel : MTLModel
@property (nonatomic) NSString dogCardText;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSString rankType;
@property (nonatomic) NSString rankSchema;
@property (nonatomic) q dogCardId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankSchema;
- (void)setRankSchema:;
- (id)dogCardText;
- (long long)dogCardId;
- (void)setDogCardText:;
- (void)setDogCardId:;
- (id)rank;
- (void)setRank:;
- (void).cxx_destruct;
- (void)setRankType:;
- (id)rankType;
+ (id)JSONKeyPathsByPropertyKey;
@end
