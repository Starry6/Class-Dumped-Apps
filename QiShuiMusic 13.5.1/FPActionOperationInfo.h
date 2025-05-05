@interface FPActionOperationInfo : NSObject
@property (nonatomic) NSString operationID;
@property (nonatomic) NSArray roots;
@property (nonatomic) BOOL attachSandboxExtensionsOnXPCEncoding;
@property (nonatomic) I qos;
@property (nonatomic) Q _t_moveQueueWidth;
@property (nonatomic) BOOL _t_clientDrivenReader;
- (unsigned int)qos;
- (void)setQos:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)operationID;
- (void).cxx_destruct;
- (void)setOperationID:;
- (id)initWithOperationID:roots:;
- (id)roots;
- (void)setRoots:;
- (BOOL)attachSandboxExtensionsOnXPCEncoding;
- (void)setAttachSandboxExtensionsOnXPCEncoding:;
- (unsigned long long)_t_moveQueueWidth;
- (void)set_t_moveQueueWidth:;
- (BOOL)_t_clientDrivenReader;
- (void)set_t_clientDrivenReader:;
+ (BOOL)supportsSecureCoding;
@end
