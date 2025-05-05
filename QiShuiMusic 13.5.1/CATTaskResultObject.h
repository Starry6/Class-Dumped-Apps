@interface CATTaskResultObject : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
