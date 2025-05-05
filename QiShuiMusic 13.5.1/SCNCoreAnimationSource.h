@interface SCNCoreAnimationSource : SCNImageSource
@property (nonatomic) CALayer layer;
- (void)setLayer:;
- (void)dealloc;
- (id)layer;
- (BOOL)isOpaque;
- (id)textureSource;
@end
