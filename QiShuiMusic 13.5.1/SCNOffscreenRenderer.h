@interface SCNOffscreenRenderer : SCNRenderer
@property (nonatomic) I textureID;
@property (nonatomic) Q antialiasingMode;
@property (nonatomic) {CGSize=dd} size;
- (unsigned long long)antialiasingMode;
- (id)snapshot;
- (void)setSize:;
- (void)setAntialiasingMode:;
- (id)size;
- (unsigned int)textureID;
+ (id)offscreenRendererWithContext:size:;
+ (id)offscreenRendererWithDevice:size:;
@end
