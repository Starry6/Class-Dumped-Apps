@interface TTAUnbindMobileModel : TTADataRespModel
@property (nonatomic) NSString captcha;
@property (nonatomic) NSString error_description;
@property (nonatomic) q error_code;
- (id)captcha;
- (id)error_description;
- (void)setCaptcha:;
- (void)setError_description:;
- (void).cxx_destruct;
- (long long)error_code;
- (void)setError_code:;
+ (id)tta_modelCustomPropertyMapper;
@end
