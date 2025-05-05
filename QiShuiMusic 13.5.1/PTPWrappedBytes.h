@interface PTPWrappedBytes : NSObject
- (unsigned long long)capacity;
- (unsigned long long)setCapacity:;
- (id)init;
- (void)dealloc;
- (id)mutableData;
- (unsigned long long)appendData:;
- (id)data;
- (unsigned long long)appendBytes:length:;
- (id)bytes;
- (unsigned long long)offset;
- (id)description;
- (unsigned long long)length;
- (void)setLength:;
- (id)mutableBytes;
- (id)initWithCapacity:;
- (id)initWithBytes:capacity:;
- (id)initWithFileDescriptor:capacity:;
- (void)setProgressNotifierCallback:context:;
- (BOOL)wasInitWithFD;
- (unsigned long long)rewindBytesToPosition64:;
- (unsigned long long)excessDataLength;
- (double)percentFull;
+ (id)wrappedBytesWithCapacity:;
+ (id)wrappedBytesWithBytes:capacity:;
@end
