@interface TTAQrCodeDataModel : TTADataRespModel
@property (nonatomic) q error_code;
@property (nonatomic) NSString errodDescription;
@property (nonatomic) NSString token;
@property (nonatomic) NSString app_name;
@property (nonatomic) NSString web_name;
@property (nonatomic) NSString qrcode;
@property (nonatomic) NSString qrcode_index_url;
@property (nonatomic) q expire_time;
- (void)setExpire_time:;
- (id)app_name;
- (id)errodDescription;
- (long long)expire_time;
- (id)qrcode_index_url;
- (void)setApp_name:;
- (void)setErrodDescription:;
- (void)setQrcode_index_url:;
- (void)setWeb_name:;
- (id)web_name;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (long long)error_code;
- (void)setError_code:;
- (id)qrcode;
- (void)setQrcode:;
+ (id)tta_modelCustomPropertyMapper;
@end
