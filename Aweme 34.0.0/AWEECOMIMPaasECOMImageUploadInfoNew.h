@interface AWEECOMIMPaasECOMImageUploadInfoNew : NSObject
@property (nonatomic) BDECPigeonECOMImageUploadInfoV2 imageUploadInfo;
@property (nonatomic) NSString accessKeyId;
@property (nonatomic) NSString secretAccessKey;
@property (nonatomic) NSString sessionToken;
@property (nonatomic) NSString expiredTime;
@property (nonatomic) NSString currentTime;
@property (nonatomic) NSString serviceId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expiredTime;
- (void)setExpiredTime:;
- (id)accessKeyId;
- (void)setAccessKeyId:;
- (id)secretAccessKey;
- (void)setSecretAccessKey:;
- (void)setImageUploadInfo:;
- (id)imageUploadInfo;
- (void)setCurrentTime:;
- (id)currentTime;
- (void)setServiceId:;
- (id)serviceId;
- (id)sessionToken;
- (void).cxx_destruct;
- (void)setSessionToken:;
+ (id)PaasImageUploadInfoWithPigeonImageUploadInfo:;
@end
