@interface DAAccountClassNames : NSObject
@property (nonatomic) NSString accountClassName;
@property (nonatomic) NSString clientAccountClassName;
@property (nonatomic) NSString daemonAccountClassName;
@property (nonatomic) NSString agentClassName;
- (void).cxx_destruct;
- (id)description;
- (id)accountClassName;
- (void)setAccountClassName:;
- (id)clientAccountClassName;
- (void)setClientAccountClassName:;
- (id)daemonAccountClassName;
- (void)setDaemonAccountClassName:;
- (id)agentClassName;
- (void)setAgentClassName:;
@end
