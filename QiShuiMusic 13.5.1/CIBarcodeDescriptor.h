@interface CIBarcodeDescriptor : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
