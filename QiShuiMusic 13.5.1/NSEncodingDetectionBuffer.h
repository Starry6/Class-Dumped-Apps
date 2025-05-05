@interface NSEncodingDetectionBuffer : NSObject
- (void)dealloc;
- (id)initWithNSStringEncoding:CFStringEncoding:stackBuffer:bufferLength:placeholder:;
- (BOOL)_growBufferIfNeededToAccomodateByteCount:;
- (void)appendByte:;
- (void)appendByte1:byte2:;
- (void)appendByte1:byte2:byte3:;
- (void)appendUTF16Char:;
- (void)appendUTF32Char:;
- (void)appendByte1:byte2:byte3:byte4:;
- (void)appendPlaceholder;
- (void)appendBytes:count:;
- (id)stringWithLossySubsitutionString:;
@end
