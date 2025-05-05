@interface DTFBeanService : NSObject
@property (nonatomic) <DTFFaceIdentityProtocol> faceIdentity;
@property (nonatomic) <DTFNFCIdentityProtocol> nfcIdentity;
- (void)setNfcIdentity:;
- (id)faceIdentity;
- (id)nfcIdentity;
- (void)setFaceIdentity:;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
