@interface EMAccountAuthentication : NSObject
@property (nonatomic) <EDAccountFactory> accountFactory;
- (void).cxx_destruct;
- (id)initWithAccountFactory:;
- (BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:;
- (BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:;
- (BOOL)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:;
- (BOOL)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:;
- (BOOL)_shouldAutoUpdateDeliveryAccount:forChangedReceivingAccount:;
- (BOOL)_hostnamesHaveSameTopLevelDomain:deliveryAccount:;
- (id)accountFactory;
+ (id)log;
@end
