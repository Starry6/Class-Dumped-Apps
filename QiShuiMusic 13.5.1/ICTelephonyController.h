@interface ICTelephonyController : NSObject
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString providerName;
@property (nonatomic) NSString mobileSubscriberCountryCode;
@property (nonatomic) NSString mobileSubscriberNetworkCode;
@property (nonatomic) NSString IMEI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)phoneNumber;
- (id)_telephonySubscriptionContext;
- (id)_telephonyClient;
- (void)phoneNumberAvailable:;
- (id)providerName;
- (id)mobileSubscriberNetworkCode;
- (BOOL)_ensureTelephonyHandlesAreReady;
- (id)IMEI;
- (void).cxx_destruct;
- (void)phoneNumberChanged:;
- (id)_init;
- (id)mobileSubscriberCountryCode;
- (void)activeSubscriptionsDidChange;
- (BOOL)sendSMSWithText:toPhoneNumber:error:;
- (void)_handleActiveSubscriptionsDidChange;
- (void)_updatePhoneNumberAllowingDidChangeNotification:;
+ (id)sharedController;
@end
