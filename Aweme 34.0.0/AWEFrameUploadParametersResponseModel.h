@interface AWEFrameUploadParametersResponseModel : MTLModel
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString fileHostName;
@property (nonatomic) NSString imageHostName;
@property (nonatomic) NSNumber fileRetryCount;
@property (nonatomic) NSNumber rwTimeout;
@property (nonatomic) NSNumber socketNumber;
@property (nonatomic) NSString authorization;
@property (nonatomic) NSDictionary authorization2;
@property (nonatomic) NSNumber maxFailTime;
@property (nonatomic) NSNumber maxFailTimeEnabled;
@property (nonatomic) NSNumber enableHttps;
@property (nonatomic) NSString userStoreRegion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppKey:;
- (id)appKey;
- (void)setImageHostName:;
- (void)setFileRetryCount:;
- (void)setRwTimeout:;
- (void)setSocketNumber:;
- (void)setMaxFailTime:;
- (void)setEnableHttps:;
- (id)fileRetryCount;
- (id)rwTimeout;
- (id)enableHttps;
- (id)socketNumber;
- (id)maxFailTime;
- (id)imageHostName;
- (void)setFileHostName:;
- (void)setAuthorization2:;
- (id)authorization2;
- (id)fileHostName;
- (id)maxFailTimeEnabled;
- (void)setMaxFailTimeEnabled:;
- (id)userStoreRegion;
- (void)setUserStoreRegion:;
- (id)authorization;
- (void)setAuthorization:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
