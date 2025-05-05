@interface IESNonOverlapTransitionFilter : IESBaseTransitionFilter
- (id)initWithRenderer:context:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (id)rotatedSize:forIndex:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setProgress:;
@end
