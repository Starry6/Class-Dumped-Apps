@interface CUINamedSolidLayerStack : CUINamedLookup
@property (nonatomic) NSArray layers;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) ^{CGImage=} flattenedImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)layers;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)size;
- (id)flattenedImage;
- (void)setLayers:;
- (id)initWithName:usingRenditionKey:fromTheme:resolvingWithBlock:;
- (id)layerImageAtIndex:;
@end
