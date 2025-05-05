@interface VideoScaler : NSObject
- (id)init;
- (void)dealloc;
- (int)convertAndScalePixelBuffer:toWidth:toHeight:withPixelFormat:usingPixelBufferPool:andStoreTo:;
@end
