@interface WiFiP2PTrafficRegistrationReservation : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) BOOL showsUIAlertOnError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initForService:;
- (void)handleConnectionEstablishedWithProxy:;
- (id)service;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:completionHandler:;
- (void)invalidate;
- (id)remoteObjectInterface;
- (id)trafficRegistrationConfiguration;
- (BOOL)showsUIAlertOnError;
- (void)setShowsUIAlertOnError:;
@end
