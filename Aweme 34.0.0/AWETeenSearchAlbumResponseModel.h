@interface AWETeenSearchAlbumResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray albumList;
@property (nonatomic) NSArray placeholderAlbumList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString searchId;
- (id)searchId;
- (void)setSearchId:;
- (void)setAlbumList:;
- (id)placeholderAlbumList;
- (void)setPlaceholderAlbumList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)albumList;
+ (id)hasMoreJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)placeholderAlbumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
