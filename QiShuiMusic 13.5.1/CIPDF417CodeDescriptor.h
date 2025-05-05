@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor
@property (nonatomic) NSData errorCorrectedPayload;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) q rowCount;
@property (nonatomic) q columnCount;
- (long long)columnCount;
- (long long)rowCount;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)copyWithZone:;
- (BOOL)isCompact;
- (id)errorCorrectedPayload;
- (id)initWithPayload:isCompact:rowCount:columnCount:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:isCompact:rowCount:columnCount:;
@end
