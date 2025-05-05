@interface CNiOSABAccountForExternalIdentifierPredicate : CNPredicate
@property (nonatomic) NSString externalIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)externalIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPredicate:;
- (id)cn_copyAccountsInAddressBook:error:;
- (id)initWithAccountExternalIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
