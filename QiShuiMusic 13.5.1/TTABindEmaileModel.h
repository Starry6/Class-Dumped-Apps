@interface TTABindEmaileModel : TTADataRespModel
@property (nonatomic) NSString captcha;
@property (nonatomic) NSString error_description;
@property (nonatomic) q error_code;
@property (nonatomic) NSString email;
- (id)captcha;
- (id)error_description;
- (void)setCaptcha:;
- (void)setError_description:;
- (void)setEmail:;
- (void).cxx_destruct;
- (id)email;
- (long long)error_code;
- (void)setError_code:;
@end
