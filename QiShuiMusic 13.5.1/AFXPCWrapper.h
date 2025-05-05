@interface AFXPCWrapper : NSObject
- (id)initWithCoder:;
- (id)xpcObject;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithXPCObject:;
+ (BOOL)supportsSecureCoding;
@end
