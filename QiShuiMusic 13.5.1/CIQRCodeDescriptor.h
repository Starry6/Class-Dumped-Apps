@interface CIQRCodeDescriptor : CIBarcodeDescriptor
@property (nonatomic) NSData errorCorrectedPayload;
@property (nonatomic) q symbolVersion;
@property (nonatomic) C maskPattern;
@property (nonatomic) q errorCorrectionLevel;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)copyWithZone:;
- (id)initWithPayload:symbolVersion:maskPattern:errorCorrectionLevel:;
- (id)errorCorrectedPayload;
- (long long)symbolVersion;
- (unsigned char)maskPattern;
- (long long)errorCorrectionLevel;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:symbolVersion:maskPattern:errorCorrectionLevel:;
@end
