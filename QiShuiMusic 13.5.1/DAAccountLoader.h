@interface DAAccountLoader : NSObject
@property (nonatomic) NSMutableDictionary acAccountTypeToAccountFrameworkSubpath;
@property (nonatomic) NSMutableDictionary acAccountTypeToAccountDaemonBundleSubpath;
@property (nonatomic) NSMutableDictionary acAccountTypeToClassNames;
@property (nonatomic) NSMutableDictionary acParentAccountTypeToChildAccountTypes;
- (id)init;
- (void).cxx_destruct;
- (void)_addAccountInfo:forFrameworkNamed:;
- (BOOL)_loadFrameworkAtSubpath:;
- (void)loadFrameworkForACAccountType:;
- (void)loadDaemonBundleForACAccountType:;
- (Class)accountClassForACAccount:;
- (Class)clientAccountClassForACAccount:;
- (Class)daemonAccountClassForACAccount:;
- (Class)agentClassForACAccount:;
- (Class)daemonAppropriateAccountClassForACAccount:;
- (id)acAccountTypeToAccountFrameworkSubpath;
- (void)setAcAccountTypeToAccountFrameworkSubpath:;
- (id)acAccountTypeToAccountDaemonBundleSubpath;
- (void)setAcAccountTypeToAccountDaemonBundleSubpath:;
- (id)acAccountTypeToClassNames;
- (void)setAcAccountTypeToClassNames:;
- (id)acParentAccountTypeToChildAccountTypes;
- (void)setAcParentAccountTypeToChildAccountTypes:;
+ (id)sharedInstance;
+ (void)_findPrivateFrameworks;
@end
