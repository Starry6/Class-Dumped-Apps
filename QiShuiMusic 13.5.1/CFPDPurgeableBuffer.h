@interface CFPDPurgeableBuffer : CFPDDataBuffer
- (BOOL)purgable;
- (void)dealloc;
- (id)bytes;
- (BOOL)beginAccessing;
- (id)initWithPropertyList:;
- (void)endAccessing;
- (unsigned long long)length;
- (id)initWithFileDescriptor:size:;
@end
