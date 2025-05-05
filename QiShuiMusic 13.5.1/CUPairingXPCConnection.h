@interface CUPairingXPCConnection : NSObject
- (void)getPairedPeersWithOptions:completion:;
- (void)connectionInvalidated;
- (void)getPairingIdentityWithOptions:completion:;
- (void)showWithCompletion:;
- (void)startMonitoringWithOptions:;
- (void)removePairedPeer:options:completion:;
- (void).cxx_destruct;
- (int)_entitled:state:label:;
- (void)deletePairingIdentityWithOptions:completion:;
- (void)findPairedPeer:options:completion:;
- (void)savePairedPeer:options:completion:;
@end
