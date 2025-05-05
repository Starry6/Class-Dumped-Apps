@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
- (id)initializePairingSession:;
- (BOOL)shouldAutoRetryPairingExchange:;
- (id)addPeer;
- (id)removePeer;
- (id)updatePeer;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)mediaRemotePairedDevices;
+ (BOOL)systemPairingAvailable;
+ (id)pairingManager;
@end
