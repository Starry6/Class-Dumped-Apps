@interface MPModelMediaClip : MPModelObject
@property (nonatomic) @? previewArtworkCatalogBlock;
@property (nonatomic) NSArray staticAssets;
@property (nonatomic) NSString title;
- (id)humanDescription;
- (id)previewArtworkCatalog;
+ (id)kind;
+ (long long)genericObjectType;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;
@end
