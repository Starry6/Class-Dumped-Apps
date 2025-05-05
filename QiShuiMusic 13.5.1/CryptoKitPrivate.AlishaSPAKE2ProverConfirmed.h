@interface CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject
@property (nonatomic) NSData alishaKey;
@property (nonatomic) NSData KEnc;
@property (nonatomic) NSData KMac;
@property (nonatomic) NSData KRMac;
@property (nonatomic) NSData SymmetricLTS;
@property (nonatomic) NSData Kble_intro;
@property (nonatomic) NSData Kble_oob_master;
@property (nonatomic) NSData M2;
- (id)init;
- (void).cxx_destruct;
- (id)alishaKey;
- (id)KEnc;
- (id)KMac;
- (id)KRMac;
- (id)SymmetricLTS;
- (id)Kble_intro;
- (id)Kble_oob_master;
- (id)M2;
@end
