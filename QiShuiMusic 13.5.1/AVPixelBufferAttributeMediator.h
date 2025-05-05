@interface AVPixelBufferAttributeMediator : NSObject
- (id)init;
- (void)dealloc;
- (void)setRequestedPixelBufferAttributes:forKey:;
- (id)mediatedPixelBufferAttributes;
- (void)setLayersAreSuppressed:;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:;
@end
