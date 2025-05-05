@interface BDUGLuckyUploadVideoToVODAuthConfig : BDXBridgeModel
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString spaceName;
@property (nonatomic) NSString hostName;
- (void)setAccessKeyId:;
- (id)secretAccessKey;
- (id)accessKeyId;
- (void)setSecretAccessKey:;
- (void)setSpaceName:;
- (void).cxx_destruct;
- (id)hostName;
- (id)sessionToken;
- (void)setHostName:;
- (void)setSessionToken:;
- (id)spaceName;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
