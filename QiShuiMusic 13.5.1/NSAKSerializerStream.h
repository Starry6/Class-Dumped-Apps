@interface NSAKSerializerStream : NSObject
- (void)dealloc;
- (unsigned long long)writeInt:;
- (unsigned long long)writeAlignedDataSize:;
- (unsigned long long)writeData:length:;
- (unsigned long long)writeRoomForInt:;
- (void)writeDelayedInt:for:;
- (void)copySerializationInto:;
- (BOOL)writeToPath:safely:;
@end
