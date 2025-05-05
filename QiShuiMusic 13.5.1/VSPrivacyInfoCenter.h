@interface VSPrivacyInfoCenter : NSObject
@property (nonatomic) NSInteger registrationToken;
@property (nonatomic) q accountAccessStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)registrationToken;
- (id)init;
- (void)dealloc;
- (void)setRegistrationToken:;
- (void)profileConnectionSettingsChanged:;
- (void)profileConnectionProfileChanged:;
- (void)_invalidateAccountAccessStatus;
- (void)updateAccountAccessStatusWithResponse:;
- (id)updateAccountAccessStatusWithError:;
- (long long)accountAccessStatus;
- (void)setAccountAccessStatus:;
+ (id)sharedPrivacyInfoCenter;
@end
