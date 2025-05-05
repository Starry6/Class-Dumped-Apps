@interface SiriAnalyticsXPCConnectionEntitlements : NSObject
@property (nonatomic) BOOL genericEntitlement;
@property (nonatomic) BOOL runtimeManagement;
@property (nonatomic) BOOL unifiedMessageStreamReadOnlyAccess;
- (BOOL)hasUnifiedMessageStreamReadOnlyAccess;
- (BOOL)hasGenericEntitlement;
- (BOOL)hasRuntimeManagement;
- (id)initWithEntitlements:;
@end
