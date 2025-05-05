@interface BDPolicyCertStatement : NSObject
@property (nonatomic) NSDictionary certStatement;
@property (nonatomic) NSDictionary dynamicCertStatement;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
- (id)certStatement;
- (id)dynamicCertStatement;
- (id)getCertStatement:;
- (void)setCertStatement:;
- (void)setDynamicCertStatement:;
- (void)setupCertStatement:;
- (void)setupDynamicStatement:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedInstance;
@end
