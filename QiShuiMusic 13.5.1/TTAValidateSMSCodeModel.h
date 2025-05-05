@interface TTAValidateSMSCodeModel : TTADataRespModel
@property (nonatomic) NSString captcha;
@property (nonatomic) q error_code;
@property (nonatomic) NSString error_description;
@property (nonatomic) NSString ticket;
- (id)captcha;
- (id)error_description;
- (void)setCaptcha:;
- (void)setError_description:;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
- (long long)error_code;
- (void)setError_code:;
+ (id)tta_modelCustomPropertyMapper;
@end
