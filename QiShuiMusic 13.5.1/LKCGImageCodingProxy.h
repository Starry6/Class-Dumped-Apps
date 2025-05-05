@interface LKCGImageCodingProxy : CACodingProxy
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)decodedObject;
+ (BOOL)supportsSecureCoding;
@end
