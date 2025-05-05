@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject
@property (nonatomic) ENAccountIdentity accountIdentity;
@property (nonatomic) NSDictionary aliasToAccountsMap;
@property (nonatomic) NSString serviceName;
- (id)serviceName;
- (void).cxx_destruct;
- (id)accountIdentity;
- (id)initWithAccountIdentity:aliasToAccountsMap:serviceName:;
- (id)accountForAlias:;
- (id)aliasToAccountsMap;
@end
