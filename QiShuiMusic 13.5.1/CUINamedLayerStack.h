@interface CUINamedLayerStack : CUINamedLookup
@property (nonatomic) NSArray layers;
@property (nonatomic) ^{CGImage=} radiosityImage;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) ^{CGImage=} flattenedImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configuration;
- (id)flattenedUIImageWithAsset:configuration:;
- (void)dealloc;
- (id)layers;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)size;
- (id)radiosityImage;
- (id)flattenedImage;
- (void)setLayers:;
- (id)initWithName:usingRenditionKey:fromTheme:resolvingWithBlock:;
- (id)layerImageAtIndex:;
+ (void)radiosityImageWithImage:displayScale:completionHandler:;
+ (id)_doRadiosityBlurOnPixelBuffer:bytesPerRow:bitsPerPixel:width:height:scaleFactor:usesGaussianBlur:adjustedSize:;
+ (id)createRadiosityImageWithImage:displayScale:;
@end
