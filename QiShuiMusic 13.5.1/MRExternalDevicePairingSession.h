@interface MRExternalDevicePairingSession : MRCryptoPairingSession
@property (nonatomic) MRCoreUtilsPairingSession pairingSession;
@property (nonatomic) MRCryptoPairingSessionBlockDelegate pairingDelegate;
@property (nonatomic) BOOL hasExchangedMessage;
@property (nonatomic) BOOL usingSystemPairing;
@property (nonatomic) Q state;
- (void)open;
- (void)setDelegate:;
- (id)pairingDelegate;
- (void)close;
- (id)pairedDevices;
- (void)setPairingDelegate:;
- (unsigned long long)state;
- (BOOL)isValid;
- (BOOL)isPaired;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)pairingSession;
- (id)removePeer;
- (id)updatePeer;
- (BOOL)isUsingSystemPairing;
- (void)handlePairingExchangeData:completion:;
- (void)handlePairingFailureWithStatus:;
- (id)encryptData:withError:;
- (id)decryptData:withError:;
- (BOOL)deleteIdentityWithError:;
- (BOOL)hasExchangedMessage;
- (void)setPairingSession:;
@end
