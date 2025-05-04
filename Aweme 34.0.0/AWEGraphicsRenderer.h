@interface AWEGraphicsRenderer : NSObject
@property (nonatomic) AWEGraphicsLayer layer;
- (id)layer;
- (id)initWithLayer:;
- (void).cxx_destruct;
- (id)render;
- (id)_render;
- (void)renderWithCompletion:;
+ (id)rendererWithLayer:;
+ (id)rendererWithLayerConstructor:;
@end
