@interface BDInstallDtraitConfig : NSObject
@property (nonatomic) NSNumber dtraitVersion;
@property (nonatomic) BOOL needBindDtrait;
@property (nonatomic) NSString dtraitPublicKey1Version;
@property (nonatomic) NSString dtraitPublicKey2Version;
@property (nonatomic) NSData dtraitPublicKey1;
@property (nonatomic) NSData dtraitPublicKey2;
@property (nonatomic) NSString dtraitToken;
- (void)setDtraitToken:;
- (id)dtraitPublicKey1;
- (id)dtraitPublicKey1Version;
- (id)dtraitPublicKey2;
- (id)dtraitPublicKey2Version;
- (id)dtraitToken;
- (id)dtraitVersion;
- (BOOL)isEmptyConfig;
- (BOOL)needBindDtrait;
- (void)setDtraitPublicKey1:;
- (void)setDtraitPublicKey1Version:;
- (void)setDtraitPublicKey2:;
- (void)setDtraitPublicKey2Version:;
- (void)setDtraitVersion:;
- (void)setNeedBindDtrait:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)configWithJsonObj:;
+ (id)publicKeyWithBase64String:;
+ (BOOL)supportsSecureCoding;
@end
