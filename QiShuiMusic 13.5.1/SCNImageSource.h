@interface SCNImageSource : NSObject
- (BOOL)isOpaque;
- (BOOL)isPremultiplied;
- (id)textureSource;
- (void)connectToProxy:;
@end
