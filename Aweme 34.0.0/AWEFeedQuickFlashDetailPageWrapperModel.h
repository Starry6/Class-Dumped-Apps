@interface AWEFeedQuickFlashDetailPageWrapperModel : MTLModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEFeedQuickFlashDetailPageItemModel itemModel;
@property (nonatomic) q sourceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)itemModel;
- (void)setItemModel:;
- (void)setSourceType:;
- (long long)sourceType;
- (void).cxx_destruct;
+ (id)isEqualBlock;
+ (id)awemeModelJSONTransformer;
+ (id)itemModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
