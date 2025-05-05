@interface NSAKDeserializerStream : NSObject
- (void)dealloc;
- (int)readInt;
- (unsigned long long)readAlignedDataSize;
- (void)readData:length:;
- (id)initFromMemoryNoCopy:length:freeWhenDone:;
- (id)initFromPath:;
@end
