@interface LKNSValueCodingProxy : CACodingProxy
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)decodedObject;
+ (BOOL)supportsSecureCoding;
@end
