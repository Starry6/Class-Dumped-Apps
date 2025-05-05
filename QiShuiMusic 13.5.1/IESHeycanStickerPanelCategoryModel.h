@interface IESHeycanStickerPanelCategoryModel : MTLModel
@property (nonatomic) q categoryId;
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSArray urlList;
@property (nonatomic) NSString uri;
@property (nonatomic) BOOL isUseRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urlList;
- (BOOL)isUseRecommend;
- (id)uri;
- (void).cxx_destruct;
- (id)categoryName;
- (long long)categoryId;
+ (id)JSONKeyPathsByPropertyKey;
@end
