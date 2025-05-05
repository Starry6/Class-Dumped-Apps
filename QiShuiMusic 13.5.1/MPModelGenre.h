@interface MPModelGenre : MPModelObject
@property (nonatomic) @? artworkCatalogBlock;
@property (nonatomic) NSString name;
@property (nonatomic) NSDate libraryAddedDate;
- (id)humanDescription;
- (id)artworkCatalog;
+ (id)kindWithAlbumKind:;
+ (id)__name_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__libraryAddedDate_KEY;
@end
