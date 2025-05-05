@interface LNPropertyQuery : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
