@interface SCNSpriteKitSource : SCNImageSource
@property (nonatomic) SKScene scene;
- (void)setScene:;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)scene;
- (id)textureSource;
@end
