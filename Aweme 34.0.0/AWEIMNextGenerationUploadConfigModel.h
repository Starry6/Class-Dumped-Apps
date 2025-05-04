@interface AWEIMNextGenerationUploadConfigModel : AWEBaseApiModel
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString spaceName;
@property (nonatomic) q expireAt;
@property (nonatomic) BOOL isOpen;
- (long long)expireAt;
- (void)setExpireAt:;
- (void)setSpaceName:;
- (id)accessKeyId;
- (void)setAccessKeyId:;
- (id)secretAccessKey;
- (void)setSecretAccessKey:;
- (void)setIsOpen:;
- (BOOL)isOpen;
- (id)sessionToken;
- (void).cxx_destruct;
- (void)setSessionToken:;
- (id)spaceName;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
