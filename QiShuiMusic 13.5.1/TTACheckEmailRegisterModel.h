@interface TTACheckEmailRegisterModel : TTADataRespModel
@property (nonatomic) NSString captcha;
@property (nonatomic) NSString error_description;
@property (nonatomic) q error_code;
@property (nonatomic) BOOL is_registered;
- (id)captcha;
- (id)error_description;
- (void)setCaptcha:;
- (void)setError_description:;
- (void)setIs_registered:;
- (void).cxx_destruct;
- (BOOL)is_registered;
- (long long)error_code;
- (void)setError_code:;
@end
