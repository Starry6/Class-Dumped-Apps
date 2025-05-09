@interface IESEffectUploadConfiguration : NSObject
@property (nonatomic) NSString uploadHostName;
@property (nonatomic) NSNumber fileRetryCount;
@property (nonatomic) NSNumber rwTimeout;
@property (nonatomic) NSNumber socketNumber;
@property (nonatomic) NSNumber maxFailTime;
@property (nonatomic) NSString queryAuth;
@property (nonatomic) NSNumber enableHttps;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString spaceName;
- (void)setEnableHttps:;
- (void)setMaxFailTime:;
- (id)secretAccessKey;
- (id)enableHttps;
- (id)fileRetryCount;
- (id)maxFailTime;
- (id)queryAuth;
- (id)rwTimeout;
- (void)setFileRetryCount:;
- (void)setQueryAuth:;
- (void)setRwTimeout:;
- (void)setSecretAccessKey:;
- (void)setSocketNumber:;
- (void)setSpaceName:;
- (void)setUploadHostName:;
- (id)socketNumber;
- (id)uploadHostName;
- (void).cxx_destruct;
- (id)sessionToken;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setSessionToken:;
- (id)spaceName;
@end
