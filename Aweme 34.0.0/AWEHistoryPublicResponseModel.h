@interface AWEHistoryPublicResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemes;
@property (nonatomic) NSString itemIDs;
- (id)awemes;
- (void)setAwemes:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)itemIDs;
- (void)setItemIDs:;
+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
