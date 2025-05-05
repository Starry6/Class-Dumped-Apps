@interface PKStrokeRenderMask : NSObject
@property (nonatomic) PKStroke stroke;
@property (nonatomic) <PKStrokeRenderCache> renderCache;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)stroke;
- (id)initWithStroke:renderCache:maskPaths:;
- (id)maskPaths;
- (id)renderCache;
@end
