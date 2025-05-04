@interface AWEEcomSearchAuthorizationManager : NSObject
@property (nonatomic) q locationAccessStatus;
@property (nonatomic) q addressBookAccessStatus;
- (id)authorizationStatusParams;
- (void)loadAuthorizationStatus;
- (long long)addressBookAccessStatus;
- (long long)locationAccessStatus;
- (void)setLocationAccessStatus:;
- (void)setAddressBookAccessStatus:;
+ (id)sharedInstance;
@end
