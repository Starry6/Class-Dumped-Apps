@interface ClientIdentity : NSObject
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString clientName;
@property (nonatomic) NSString codeSigningIdentity;
@property (nonatomic) NSInteger pid;
- (id)bundleIdentifier;
- (id)clientName;
- (id)auditToken;
- (id)codeSigningIdentity;
- (int)pid;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (id)description;
@end
