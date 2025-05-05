@interface SFX963KeyDerivationOperation : NSObject
@property (nonatomic) <SFKeyDerivingOperation> sharedSecretOperation;
@property (nonatomic) <SFDigestOperation> digestOperation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDigestOperation:;
- (id)digestOperation;
- (id)copyWithZone:;
- (id)sharedSecretOperation;
- (id)deriveKeyWithSpecifier:fromKeySource:error:;
- (id)initWithSharedSecretOperation:;
- (id)initWithSharedSecretOperation:digestOperation:;
- (void)setSharedSecretOperation:;
+ (BOOL)supportsSecureCoding;
+ (long long)keySource;
@end
