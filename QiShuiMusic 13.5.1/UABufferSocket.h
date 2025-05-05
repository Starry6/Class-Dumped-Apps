@interface UABufferSocket : UASocket
- (void)fillBufferWithBytesLength:;
- (id)initWithHost:port:;
- (void)resetBufferIfNeeded;
- (void)dealloc;
- (void)disconnect;
- (void)resetBuffer;
@end
