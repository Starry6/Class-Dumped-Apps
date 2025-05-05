@interface CNiOSABAccountForContainerPredicate : CNPredicate
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithContainerIdentifier:;
- (void).cxx_destruct;
- (id)initWithPredicate:;
- (id)cn_copyAccountsInAddressBook:error:;
+ (BOOL)supportsSecureCoding;
@end
