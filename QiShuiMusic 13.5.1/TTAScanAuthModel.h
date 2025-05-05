@interface TTAScanAuthModel : TTABaseRespModel
@property (nonatomic) TTAScanAuthDataModel data;
@property (nonatomic) NSString error_description;
@property (nonatomic) q error_code;
- (id)error_description;
- (void)setError_description:;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (long long)error_code;
- (void)setError_code:;
+ (id)tta_modelCustomPropertyMapper;
@end
