@interface MTLIOCompressor : NSObject
- (void)dealloc;
- (void)appendData:;
- (long long)close;
- (id)initWithType:dst:chunkSize:;
@end
