@interface PLDaemonJobReply : NSObject
@property (nonatomic) NSObject<OS_xpc_object> xpcReply;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)xpcReply;
- (id)initWithReply:;
+ (BOOL)supportsSecureCoding;
@end
