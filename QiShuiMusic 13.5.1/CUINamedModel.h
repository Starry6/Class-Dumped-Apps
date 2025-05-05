@interface CUINamedModel : CUINamedLookup
@property (nonatomic) MDLAsset asset;
- (id)asset;
- (id)description;
- (id)initWithName:usingRenditionKey:fromTheme:;
- (id)_renditionForKey:inThemeRef:;
@end
