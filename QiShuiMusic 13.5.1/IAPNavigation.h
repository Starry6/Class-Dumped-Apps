@interface IAPNavigation : NSObject
@property (nonatomic) NSObject<OS_xpc_object> iap2d_connection;
@property (nonatomic) BOOL connected;
@property (nonatomic) NSObject<OS_dispatch_queue> processingQ;
@property (nonatomic) <IAPNavigationDelegate> delegate;
@property (nonatomic) NSSet availableAccessories;
- (void)setConnected:;
- (id)init;
- (BOOL)connected;
- (void)dealloc;
- (void)setDelegate:;
- (id)availableAccessories;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)updateNavigationGuidanceInfo:forAccessory:withComponent:;
- (void)_iap2d_server_did_launch;
- (void)_iap2d_server_did_die;
- (void)_getConnectedAccessories;
- (void)updateNavigationManeuverInfo:forAccessory:withComponent:;
- (void)_updateInternalStateWithArrayOfAccessories:;
- (id)_convert_xpc_array_to_NSArray:;
- (void)setAvailableAccessories:;
- (id)iap2d_connection;
- (void)setIap2d_connection:;
- (id)processingQ;
- (void)setProcessingQ:;
@end
