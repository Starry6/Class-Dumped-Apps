@interface CUINamedSolidLayerImage : CUINamedImage
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) double opacity;
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpacity:;
- (void)dealloc;
- (void)setFrame:;
- (double)opacity;
- (id)frame;
- (void)setBlendMode:;
- (int)blendMode;
- (id)initWithName:usingRenditionKey:fromTheme:;
- (BOOL)fixedFrame;
- (void)setFixedFrame:;
- (id)edgeDefinitionTextureWithBufferAllocator:;
- (id)gradientTextureWithBufferAllocator:;
@end
