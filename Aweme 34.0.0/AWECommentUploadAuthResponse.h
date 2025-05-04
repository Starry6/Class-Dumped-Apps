@interface AWECommentUploadAuthResponse : AWEBaseApiModel
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) NSNumber currentTime;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString uploadDomain;
@property (nonatomic) AWECommentUploadAuthResponse liveVideoUploadAuthResponse;
- (id)liveVideoUploadAuthResponse;
- (id)uploadDomain;
- (void)setUploadDomain:;
- (void)setLiveVideoUploadAuthResponse:;
- (void)setCurrentTime:;
- (id)currentTime;
- (void)setSecretKey:;
- (void)setServiceID:;
- (id)sessionToken;
- (id)serviceID;
- (id)secretKey;
- (void).cxx_destruct;
- (id)accessKey;
- (id)expireTime;
- (void)setAccessKey:;
- (void)setExpireTime:;
- (void)setSessionToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
