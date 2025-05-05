@interface CUINamedImageAtlas : CUINamedLookup
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) ^{__CFArray=} images;
@property (nonatomic) double scale;
@property (nonatomic) NSArray imageNames;
@property (nonatomic) BOOL completeTextureExtrusion;
- (void)dealloc;
- (id)imageWithName:;
- (id)images;
- (double)scale;
- (id)image;
- (id)initWithName:usingRenditionKey:withContents:contentsFromCatalog:fromTheme:withSourceThemeRef:;
- (id)imageNames;
- (BOOL)completeTextureExtrusion;
@end
