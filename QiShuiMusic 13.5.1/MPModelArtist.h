@interface MPModelArtist : MPModelPerson
@property (nonatomic) BOOL hasBiography;
@property (nonatomic) q songCount;
@property (nonatomic) q albumCount;
@property (nonatomic) MPModelGenre genre;
@property (nonatomic) @? artworkCatalogBlock;
@property (nonatomic) @? editorialArtworkCatalogBlock;
@property (nonatomic) NSDate libraryAddedDate;
@property (nonatomic) BOOL classicalExperienceAvailable;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
+ (id)kindWithAlbumKind:;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__genre_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__hasBiography_KEY;
+ (id)__songCount_KEY;
+ (id)__albumCount_KEY;
+ (id)__classicalExperienceAvailable_KEY;
@end
