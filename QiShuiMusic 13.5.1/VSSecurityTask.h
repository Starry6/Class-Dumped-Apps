@interface VSSecurityTask : NSObject
@property (nonatomic) NSString signingIdentifier;
- (id)init;
- (void)dealloc;
- (id)signingIdentifier;
- (id)initWithCreateFromSelfProc:copyValueForEntitlementProc:;
- (id)_taskRef;
- (BOOL)getValue:forEntitlement:error:;
- (id)_copySigningIdentifier;
- (BOOL)shouldAllowAccessForBooleanEntitlement:;
- (BOOL)shouldAllowAccessToSubscriberIdentifierHashModifier:;
- (id)initWithAuditToken:createWithAuditTokenProc:copyValueForEntitlementProc:;
+ (id)securityTaskForCurrentConnection;
+ (id)securityTaskWithAuditToken:;
+ (void)setSecurityTaskForCurrentConnection:;
+ (id)currentSecurityTask;
@end
