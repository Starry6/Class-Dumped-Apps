@interface CNiOSABAccountIdentifiersPredicate : CNPredicate
@property (nonatomic) NSArray identifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIdentifiers:;
- (id)identifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPredicate:;
- (id)cn_copyAccountsInAddressBook:error:;
+ (BOOL)supportsSecureCoding;
@end
