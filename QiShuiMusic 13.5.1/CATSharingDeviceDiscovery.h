@interface CATSharingDeviceDiscovery : NSObject
@property (nonatomic) BOOL invalidated;
@property (nonatomic) NSArray nearbyDevices;
- (BOOL)invalidated;
- (void)deviceFound:;
- (void)setInvalidated:;
- (void)_activate;
- (void).cxx_destruct;
- (id)nearbyDevices;
- (void)deviceLost:;
- (void)invalidate;
- (void)_invalidateWithError:;
- (void)activate;
- (id)initWithDiscoveryPrimitives:delegate:delegateOperationQueue:;
- (id)pairingTerminalForDevice:;
- (void)addPrimitiveHandlers;
- (void)removePrimitiveHandlers;
- (void)setNearbyDevices:;
@end
