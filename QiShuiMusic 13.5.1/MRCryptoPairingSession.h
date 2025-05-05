@interface MRCryptoPairingSession : NSObject
@property (nonatomic) MRDeviceInfo device;
@property (nonatomic) Q role;
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL paired;
@property (nonatomic) NSArray pairedDevices;
@property (nonatomic) <MRCryptoPairingSessionDelegate> delegate;
- (id)init;
- (void)open;
- (void)setDelegate:;
- (void)close;
- (id)pairedDevices;
- (id)delegate;
- (BOOL)isValid;
- (BOOL)isPaired;
- (void).cxx_destruct;
- (unsigned long long)role;
- (id)device;
- (id)removePeer;
- (id)updatePeer;
- (id)initWithRole:device:;
- (void)handlePairingExchangeData:completion:;
- (void)handlePairingFailureWithStatus:;
- (id)encryptData:withError:;
- (id)decryptData:withError:;
- (BOOL)deleteIdentityWithError:;
+ (id)allocWithZone:;
@end
