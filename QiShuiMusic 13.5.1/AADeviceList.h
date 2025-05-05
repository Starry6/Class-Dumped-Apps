@interface AADeviceList : NSObject
@property (nonatomic) NSArray devices;
@property (nonatomic) NSError loadError;
@property (nonatomic) <AADeviceListDelegate> delegate;
- (id)initWithAccountManager:;
- (id)_appleAccount;
- (id)devices;
- (void)setDelegate:;
- (void)_loadDeviceList;
- (id)_accountStore;
- (void)_renewCredentials;
- (id)delegate;
- (id)_aidaAccount;
- (void).cxx_destruct;
- (void)_loadRequest:responseHandler:;
- (id)loadError;
- (void)_createRequestForAccount:requestHandler:;
- (id)_authController;
- (void)refreshDeviceList;
- (void)_setDeviceList:loadError:;
@end
