@interface ByteRTCFrameExtendedData : NSObject
@property (nonatomic) Q frameType;
@property (nonatomic) NSData extendedData;
@property (nonatomic) q extendedDataLen;
- (long long)extendedDataLen;
- (void)setExtendedDataLen:;
- (id)extendedData;
- (void)setExtendedData:;
- (void).cxx_destruct;
- (unsigned long long)frameType;
- (void)setFrameType:;
@end
