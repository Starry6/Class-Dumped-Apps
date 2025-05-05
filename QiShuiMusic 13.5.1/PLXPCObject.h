@interface PLXPCObject : NSObject
@property (nonatomic) NSObject<OS_xpc_object> object;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
- (id)initWithXPCObject:;
+ (BOOL)supportsSecureCoding;
+ (id)type;
@end
