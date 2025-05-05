@interface MPModelCurator : MPModelPerson
@property (nonatomic) NSString shortName;
@property (nonatomic) NSString editorNotes;
@property (nonatomic) NSString shortEditorNotes;
@property (nonatomic) q curatorKind;
@property (nonatomic) q curatorSubKind;
@property (nonatomic) @? editorialArtworkCatalogBlock;
@property (nonatomic) @? brandLogoArtworkCatalogBlock;
@property (nonatomic) NSString handle;
- (id)editorialArtworkCatalog;
- (id)brandLogoArtworkCatalog;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__shortName_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__curatorKind_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__curatorSubKind_KEY;
+ (id)__handle_KEY;
+ (id)__editorNotes_KEY;
@end
