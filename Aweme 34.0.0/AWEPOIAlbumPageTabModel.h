@interface AWEPOIAlbumPageTabModel : AWEBaseApiModel
@property (nonatomic) NSString tabName;
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabPageSymbol;
@property (nonatomic) NSString contentSchema;
@property (nonatomic) NSString itemIDList;
- (long long)tabType;
- (void)setTabType:;
- (id)itemIDList;
- (void)setItemIDList:;
- (id)contentSchema;
- (void)setContentSchema:;
- (id)tabPageSymbol;
- (void)setTabPageSymbol:;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
+ (id)tabTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
