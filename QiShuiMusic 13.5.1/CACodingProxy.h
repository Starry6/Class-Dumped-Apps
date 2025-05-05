@interface CACodingProxy : NSObject
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)decodedObject;
+ (BOOL)supportsSecureCoding;
@end
