@interface AWERecommendUserExtraModel : AWEBaseApiModel
@property (nonatomic) NSNumber userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray story24BlurCoverList;
@property (nonatomic) Q addButtonType;
- (id)secUserID;
- (void)setSecUserID:;
- (id)awemeList;
- (void)setAwemeList:;
- (unsigned long long)addButtonType;
- (void)setAddButtonType:;
- (id)story24BlurCoverList;
- (void)setStory24BlurCoverList:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)itemList;
+ (id)awemeListJSONTransformer;
+ (id)story24BlurCoverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
