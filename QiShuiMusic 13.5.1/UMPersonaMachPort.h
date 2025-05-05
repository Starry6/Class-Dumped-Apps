@interface UMPersonaMachPort : NSMachPort
- (id)initWithCoder:;
- (id)replacementObjectForCoder:;
- (void)encodeWithCoder:;
- (Class)classForCoder;
+ (BOOL)supportsSecureCoding;
@end
