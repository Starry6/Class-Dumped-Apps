@interface ISCompositor : NSObject
@property (nonatomic) <ISCompositorRecipe> recipe;
@property (nonatomic) NSMutableArray elements;
@property (nonatomic) BOOL canUseCoreImage;
@property (nonatomic) CIContext sharedCIContext;
@property (nonatomic) Q renderingMode;
- (void)setRecipe:;
- (void)addElement:;
- (id)initWithRecipe:;
- (unsigned long long)renderingMode;
- (void)drawInContext:;
- (void)clearResources;
- (id)init;
- (void)addElementWithRecipe:resources:;
- (void)dealloc;
- (id)elements;
- (void)setElements:;
- (id)filterForLayer:scale:resourceProvider:;
- (void)drawElement:inContext:;
- (id)sharedCIContext;
- (BOOL)canUseCoreImageForEffects;
- (void).cxx_destruct;
- (BOOL)canUseCoreImage;
- (void)addResourcesFromDictionary:;
- (void)reset;
- (void)setResource:named:;
- (id)maskImageForLayer:size:scale:resourceProvider:;
- (id)imageForSize:scale:;
- (id)recipe;
- (void)drawLayer:resourceProvider:inContext:;
- (id)scaledImageFromContent:size:scale:needsScaled:;
- (void)setRenderingMode:;
@end
