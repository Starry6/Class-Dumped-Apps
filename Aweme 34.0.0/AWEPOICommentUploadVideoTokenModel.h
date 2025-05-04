@interface AWEPOICommentUploadVideoTokenModel : AWEBaseApiModel
@property (nonatomic) NSString spaceName;
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString expiredTime;
- (void)setSpaceName:;
- (id)expiredTime;
- (void)setExpiredTime:;
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
