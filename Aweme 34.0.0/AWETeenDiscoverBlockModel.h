@interface AWETeenDiscoverBlockModel : AWEBaseApiModel
@property (nonatomic) NSString blockId;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray albums;
- (id)albums;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setAlbums:;
- (id)blockId;
- (void)setBlockId:;
+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
