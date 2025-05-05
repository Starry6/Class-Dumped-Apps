@interface TTAGetSMSCodeModel : TTADataRespModel
@property (nonatomic) NSNumber retry_time;
@property (nonatomic) NSString mobile;
@property (nonatomic) NSString captcha;
@property (nonatomic) q error_code;
@property (nonatomic) NSString error_description;
@property (nonatomic) NSString dialog_tips;
@property (nonatomic) NSString sec_info;
- (id)captcha;
- (void)setDialog_tips:;
- (id)dialog_tips;
- (id)error_description;
- (id)retry_time;
- (id)sec_info;
- (void)setCaptcha:;
- (void)setError_description:;
- (void)setRetry_time:;
- (void)setSec_info:;
- (void).cxx_destruct;
- (long long)error_code;
- (void)setError_code:;
- (id)mobile;
- (void)setMobile:;
+ (id)tta_modelCustomPropertyMapper;
@end
