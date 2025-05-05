@interface CNEntitlementVerifierTestDouble : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)auditToken:hasBooleanEntitlement:error:;
- (id)valuesForAuditToken:forEntitlements:error:;
- (BOOL)auditToken:isFirstOrSecondPartyWithError:;
- (BOOL)auditToken:hasArrayWithStringValue:forAnyEntitlement:error:;
- (void).cxx_destruct;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:;
- (BOOL)currentProcessHasBooleanEntitlement:error:;
- (BOOL)currentProcessHasArrayWithStringValue:forAnyEntitlement:error:;
- (id)valuesForCurrentProcessForEntitlements:error:;
- (void)setCurrentProcessHasValue:forEntitlement:;
- (void)setCurrentProcessHasError:forEntitlement:;
- (void)setAuditToken:hasValue:forEntitlement:;
- (void)setAuditToken:hasError:forEntitlement:;
- (void)setAuditToken:isFirstOrSecondParty:;
- (void)setAuditToken:isFirstOrSecondPartyError:;
- (BOOL)booleanResultForKey:error:;
- (id)stringArrayResultForKey:error:;
- (id)valueForEntitlementForKey:error:;
+ (id)keyForEntitlement:;
+ (id)keyForEntitlement:auditToken:;
@end
