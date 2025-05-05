@interface WebCoreSharedBufferData : NSData
- (void)dealloc;
- (id)bytes;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id).cxx_construct;
- (id)initWithDataSegment:position:size:;
@end
