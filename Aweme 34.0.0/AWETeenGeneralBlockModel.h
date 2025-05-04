@interface AWETeenGeneralBlockModel : AWEBaseApiModel
@property (nonatomic) AWEMinorAlbum minorAlbum;
@property (nonatomic) NSArray elements;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setMinorAlbum:;
- (id)minorAlbum;
- (void)setHasMore:;
- (BOOL)hasMore;
- (id)elements;
- (void).cxx_destruct;
- (void)setElements:;
+ (id)awemeListJSONTransformer;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
