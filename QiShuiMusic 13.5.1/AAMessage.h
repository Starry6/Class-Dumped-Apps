@interface AAMessage : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)keysForEncoding;
+ (BOOL)supportsSecureCoding;
@end
