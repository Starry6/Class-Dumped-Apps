@interface MPModelTVShow : MPModelObject
@property (nonatomic) NSString title;
@property (nonatomic) MPModelTVShowCreator creator;
@property (nonatomic) NSString shortTitle;
@property (nonatomic) NSString editorNotes;
@property (nonatomic) NSString shortEditorNotes;
@property (nonatomic) NSString tagline;
@property (nonatomic) @? artworkCatalogBlock;
@property (nonatomic) @? editorialArtworkCatalogBlock;
@property (nonatomic) q episodesCount;
- (id)humanDescription;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)kindWithSeasonKind:;
+ (id)__shortEditorNotes_KEY;
+ (id)__editorNotes_KEY;
+ (id)__title_KEY;
+ (id)__tagline_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortTitle_KEY;
+ (id)__creator_KEY;
@end
