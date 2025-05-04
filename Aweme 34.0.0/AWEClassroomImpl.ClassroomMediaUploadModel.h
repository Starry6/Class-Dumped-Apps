@interface AWEClassroomImpl.ClassroomMediaUploadModel : MTLModel
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString secretKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) q expireTime;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSecretKey:;
- (id)sessionToken;
- (id)secretKey;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)accessKey;
- (long long)expireTime;
- (void)setAccessKey:;
- (void)setExpireTime:;
- (void)setSessionToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
