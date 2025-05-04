@interface AWEBindSettingModel : AWEBaseApiModel
@property (nonatomic) Q platform;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) BOOL forbidBind;
- (void)setErrorMsg:;
- (id)errorMsg;
- (BOOL)forbidBind;
- (void)setForbidBind:;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (void)setPlatform:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)platformJSONTransformer;
@end
