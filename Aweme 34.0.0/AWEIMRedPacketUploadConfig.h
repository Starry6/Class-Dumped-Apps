@interface AWEIMRedPacketUploadConfig : AWEBaseApiModel
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString spaceName;
@property (nonatomic) q expireAt;
@property (nonatomic) NSArray storeKeys;
- (long long)expireAt;
- (void)setExpireAt:;
- (void)setSpaceName:;
- (void)setStoreKeys:;
- (id)storeKeys;
- (id)accessKeyId;
- (void)setAccessKeyId:;
- (id)secretAccessKey;
- (void)setSecretAccessKey:;
- (id)sessionToken;
- (void).cxx_destruct;
- (void)setSessionToken:;
- (id)spaceName;
+ (id)JSONKeyPathsByPropertyKey;
@end
