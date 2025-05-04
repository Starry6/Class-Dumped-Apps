@interface AWEIMSecurityToastConfigResponse : AWEBaseApiModel
@property (nonatomic) NSString bizScene;
@property (nonatomic) NSString toastCode;
@property (nonatomic) AWEIMSecurityToastConfigModel toastConfig;
- (void)setBizScene:;
- (id)bizScene;
- (id)toastCode;
- (id)toastConfig;
- (void)setToastConfig:;
- (void)setToastCode:;
- (void).cxx_destruct;
+ (id)toastConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
