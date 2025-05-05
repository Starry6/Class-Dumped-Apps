@interface WBSSafariSandboxBroker : NSObject
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) NSInteger pid;
@property (nonatomic) {?=[8I]} auditToken;
- (id)log;
- (id)auditToken;
- (int)pid;
- (void).cxx_destruct;
- (id)initWithPID:auditToken:;
@end
