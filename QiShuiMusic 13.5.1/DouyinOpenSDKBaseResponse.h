@interface DouyinOpenSDKBaseResponse : NSObject
@property (nonatomic) NSString originRequestID;
@property (nonatomic) NSString responseId;
@property (nonatomic) NSString lang;
@property (nonatomic) NSString country;
@property (nonatomic) BOOL isSucceed;
@property (nonatomic) q errCode;
@property (nonatomic) q subErrorCode;
@property (nonatomic) NSString errString;
- (long long)errCode;
- (id)originRequestID;
- (id)errString;
- (BOOL)isSucceed;
- (void)setErrCode:;
- (void)setErrString:;
- (void)setOriginRequestID:;
- (void)setSubErrorCode:;
- (long long)subErrorCode;
- (id)country;
- (id)init;
- (void)setCountry:;
- (void).cxx_destruct;
- (id)responseId;
- (void)setResponseId:;
- (id)lang;
- (void)setLang:;
@end
