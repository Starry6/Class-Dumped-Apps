@interface IDSContinuity : NSObject
@property (nonatomic) q state;
- (id)initWithDelegate:queue:;
- (void)disconnectFromPeer:;
- (void)startScanningForType:withData:mask:peers:withOptions:boostedScan:duplicates:;
- (void)connectToPeer:;
- (void)startTrackingPeer:;
- (void)dealloc;
- (void)startTrackingPeer:forType:;
- (void)startAdvertisingOfType:withData:withOptions:;
- (void)stopTrackingPeer:;
- (void)startScanningForType:withData:withOptions:;
- (void)startScanningForType:withData:peers:withOptions:;
- (void)startScanningForType:withData:mask:withOptions:boostedScan:;
- (void)stopAdvertisingOfType:;
- (long long)state;
- (void).cxx_destruct;
- (void)startScanningForType:withData:mask:peers:withOptions:boostedScan:;
- (void)startScanningForType:withData:mask:peers:withOptions:;
- (void)startScanningForType:withData:mask:withOptions:;
- (void)stopTrackingPeer:forType:;
- (void)stopScanningForType:;
- (void)startScanningForType:withData:mask:withOptions:boostedScan:duplicates:;
@end
