@interface PKRendererTileProperties : NSObject
@property (nonatomic) q level;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) BOOL sixChannelMode;
@property (nonatomic) {CGAffineTransform=dddddd} drawingTransform;
- (long long)level;
- (unsigned long long)hash;
- (id)offset;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)drawingTransform;
- (id)initWithLevel:offset:drawingTransform:sixChannelMode:;
- (BOOL)sixChannelMode;
@end
