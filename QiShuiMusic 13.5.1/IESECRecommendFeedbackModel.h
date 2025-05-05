@interface IESECRecommendFeedbackModel : MTLModel
@property (nonatomic) NSArray itemList;
@property (nonatomic) Q firstPageLimit;
@property (nonatomic) IESECRecommendFeedbackItemModel clickModel;
@property (nonatomic) Q closeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickModel;
- (unsigned long long)closeType;
- (id)firstPageItemList;
- (unsigned long long)firstPageLimit;
- (unsigned long long)getRealPageLimit;
- (id)secondPageItemList;
- (void)setClickModel:;
- (void)setCloseType:;
- (void)setFirstPageLimit:;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
