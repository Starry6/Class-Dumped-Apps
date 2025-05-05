@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor
@property (nonatomic) NSData errorCorrectedPayload;
@property (nonatomic) q rowCount;
@property (nonatomic) q columnCount;
@property (nonatomic) q eccVersion;
- (long long)columnCount;
- (long long)rowCount;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)errorCorrectedPayload;
- (id)initWithPayload:rowCount:columnCount:eccVersion:;
- (long long)eccVersion;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:rowCount:columnCount:eccVersion:;
@end
