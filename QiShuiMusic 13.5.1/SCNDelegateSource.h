@interface SCNDelegateSource : SCNImageSource
@property (nonatomic) @ delegate;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)isOpaque;
- (id)delegate;
- (id)textureSource;
@end
