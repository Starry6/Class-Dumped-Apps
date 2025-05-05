@interface AOLAccount : YahooAccount
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statisticsKind;
- (id)_defaultSpecialMailboxNameForType:;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)URLForMessage:;
- (id)_deliveryAccountCreateIfNeeded:;
+ (id)accountTypeIdentifier;
+ (id)displayedAccountTypeString;
+ (id)emailAddressWithUsername:;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
@end
