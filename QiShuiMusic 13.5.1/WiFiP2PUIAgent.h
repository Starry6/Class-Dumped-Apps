@interface WiFiP2PUIAgent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)exportedObject;
- (id)exportedInterface;
- (void)addNotificationRequest:completionHandler:;
- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:completionHandler:;
- (void).cxx_destruct;
- (void)configureNotificationsWithBundleIdentifier:;
- (void)removeNotificationsWithIdentifiers:;
- (void)startConnectionUsingProxy:completionHandler:;
- (void)invalidate;
- (void)activate;
@end
