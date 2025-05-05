@interface CTCellularPlanManagerDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)carrierInfoDidUpdate;
- (void)pendingTransferPlanInfoDidUpdate;
- (void)planInfoDidUpdate;
- (void)localPlanInfoDidUpdate:;
@end
