@interface PALazyAuditTokenBasedClientIdentity : NSObject
@property (nonatomic) NSObject<OS_tcc_identity> identity;
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) BOOL identityResolved;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identity;
- (BOOL)isIdentityResolved;
- (id)auditToken;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (id)description;
@end
