@interface PKXPCObject : NSObject
@property (nonatomic) NSObject<OS_xpc_object> object;
- (void)setObject:;
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
+ (BOOL)supportsSecureCoding;
+ (id)object:;
@end
