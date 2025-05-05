@interface CVAPhotoMTLRingBuffer : NSObject
- (id)currentBuffer;
- (id)initWithLength:options:device:;
- (void).cxx_destruct;
- (id)initWithBytes:length:options:device:;
- (id)getBufferAt:;
- (id).cxx_construct;
- (id)advancedBuffer;
@end
