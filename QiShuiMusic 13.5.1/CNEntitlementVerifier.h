@interface CNEntitlementVerifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)auditToken:hasBooleanEntitlement:error:;
- (id)valuesForAuditToken:forEntitlements:error:;
- (BOOL)auditToken:isFirstOrSecondPartyWithError:;
- (BOOL)auditToken:hasArrayWithStringValue:forAnyEntitlement:error:;
- (BOOL)secTask:hasArrayWithStringValue:forAnyEntitlement:error:;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:;
- (BOOL)currentProcessHasBooleanEntitlement:error:;
- (BOOL)currentProcessHasArrayWithStringValue:forAnyEntitlement:error:;
- (id)valuesForCurrentProcessForEntitlements:error:;
- (BOOL)secTask:hasBooleanEntitlement:error:;
- (BOOL)secTask:isFirstOrSecondPartyWithError:;
- (id)secTask:valuesForEntitlements:error:;
@end
