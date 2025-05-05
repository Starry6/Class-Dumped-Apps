@interface IDSPairedDeviceManager : NSObject
@property (nonatomic) IDSXPCDaemonController xpcDaemonController;
@property (nonatomic) NSSet allowedTrafficClassifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setPairedDeviceInfo:;
- (void)deliveryStats:;
- (id)allowedTrafficClassifiers;
- (void)setAllowedTrafficClassifiers:;
- (void)deletePairedDevice:withCompletionBlock:queue:;
- (void)getLocalDeviceInfoWithCompletionBlock:queue:;
- (void)getPairedDeviceInfoWithCompletionBlock:queue:;
- (void)getDeliveryStatsWithCompletionBlock:queue:;
- (void)device:pairingDeleted:;
- (void)constructRAResponseDictionary:completionHandler:;
- (id)xpcDaemonController;
- (void)setXpcDaemonController:;
+ (id)sharedInstance;
@end
