@interface CIAztecCodeDescriptor : CIBarcodeDescriptor
@property (nonatomic) NSData errorCorrectedPayload;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) q layerCount;
@property (nonatomic) q dataCodewordCount;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)copyWithZone:;
- (long long)layerCount;
- (BOOL)isCompact;
- (id)errorCorrectedPayload;
- (id)initWithPayload:isCompact:layerCount:dataCodewordCount:;
- (long long)dataCodewordCount;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:isCompact:layerCount:dataCodewordCount:;
@end
