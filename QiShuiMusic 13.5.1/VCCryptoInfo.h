@interface VCCryptoInfo : NSObject
@property (nonatomic) ^{tagSRTPINFO=ii{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}IISSIIQii[32C][14C][32C][14C][20C]{_opaque_pthread_mutex_t=q[56c]}^v^vII{os_unfair_lock_s=I}{tagSRTPCryptContext=^{_CCCryptor}}{tagSRTPTransformPolicy=iiiiiii}IB} state;
- (void)dealloc;
- (id)state;
- (id)initWithSRTPInfo:;
@end
