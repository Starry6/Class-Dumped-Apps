@interface MPMediaLibraryPrivacyContext : NSObject
- (id)init;
- (void)endAccessInterval;
- (id)initWithClientIdentity:;
- (void)logPrivacyAccess;
- (void)beginAccessInterval;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (id)initWithPAApplication:;
+ (void)setDefaultClientWithAuditToken:;
+ (id)sharedContextForCurrentProcess;
+ (id)contextForDefaultClient;
@end
