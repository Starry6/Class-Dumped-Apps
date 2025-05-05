@interface CTPlan : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
