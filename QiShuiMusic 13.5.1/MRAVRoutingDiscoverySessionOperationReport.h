@interface MRAVRoutingDiscoverySessionOperationReport : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSArray discoveredOutputDeviceUIDs;
@property (nonatomic) NSArray undiscoveredOutputDeviceUIDs;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (id)discoveredOutputDeviceUIDs;
- (void)setDiscoveredOutputDeviceUIDs:;
- (id)undiscoveredOutputDeviceUIDs;
- (void)setUndiscoveredOutputDeviceUIDs:;
@end
