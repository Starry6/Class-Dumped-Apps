@interface Core_Audio_XPC_Raw_Transporter : NSObject
@property (nonatomic) NSObject<OS_xpc_object> object;
- (void)setObject:;
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
+ (BOOL)supportsSecureCoding;
+ (id)object:;
@end
