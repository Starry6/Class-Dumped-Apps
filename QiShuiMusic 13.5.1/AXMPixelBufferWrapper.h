@interface AXMPixelBufferWrapper : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) I orientation;
@property (nonatomic) {CGSize=dd} unorientedSize;
@property (nonatomic) {CGSize=dd} orientedSize;
- (id)init;
- (void)dealloc;
- (id)pixelBuffer;
- (unsigned int)orientation;
- (id)_initWithPixelBuffer:orientation:;
- (id)unorientedSize;
- (id)orientedSize;
+ (id)new;
+ (id)wrapperWithPixelBuffer:orientation:;
@end
