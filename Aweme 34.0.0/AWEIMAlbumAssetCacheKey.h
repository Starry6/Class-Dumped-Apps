@interface AWEIMAlbumAssetCacheKey : NSObject
@property (nonatomic) BOOL ascending;
@property (nonatomic) Q resourceType;
@property (nonatomic) q sortStyle;
@property (nonatomic) NSString collectionLocalizedTitle;
- (void)setCollectionLocalizedTitle:;
- (id)collectionLocalizedTitle;
- (BOOL)ascending;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (unsigned long long)hash;
- (void)setAscending:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSortStyle:;
- (long long)sortStyle;
+ (id)keyWithAscending:type:sortStyle:localizedTitle:;
@end
