@interface AWEIMSecurityGlobalToastConfigResponse : AWEBaseApiModel
@property (nonatomic) q process_type;
@property (nonatomic) AWEIMSecurityGlobalToastContentConfigModel contentConfig;
- (void)setContentConfig:;
- (long long)process_type;
- (void)setProcess_type:;
- (void).cxx_destruct;
- (id)contentConfig;
+ (id)contentConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
