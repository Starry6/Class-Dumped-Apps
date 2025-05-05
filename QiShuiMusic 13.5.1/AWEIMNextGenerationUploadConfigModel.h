@interface AWEIMNextGenerationUploadConfigModel : IESIMBaseApiModel
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString spaceName;
@property (nonatomic) q expireAt;
@property (nonatomic) BOOL isOpen;
- (void)setAccessKeyId:;
- (id)secretAccessKey;
- (id)accessKeyId;
- (long long)expireAt;
- (void)setExpireAt:;
- (void)setSecretAccessKey:;
- (void)setSpaceName:;
- (BOOL)isOpen;
- (void)setIsOpen:;
- (void).cxx_destruct;
- (id)sessionToken;
- (void)setSessionToken:;
- (id)spaceName;
+ (id)JSONKeyPathsByPropertyKey;
@end
