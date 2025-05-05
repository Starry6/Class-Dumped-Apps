@interface MPModelRecordLabel : MPModelObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString shortDescriptionText;
@property (nonatomic) @? artworkCatalogBlock;
@property (nonatomic) @? editorialArtworkCatalogBlock;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
+ (id)__shortDescriptionText_KEY;
+ (id)__name_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
@end
