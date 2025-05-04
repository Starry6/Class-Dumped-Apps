@interface AWEIMSecurityGlobalToastContentConfigModel_UIConfig : AWEBaseApiModel
@property (nonatomic) NSString headImageURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString descText;
@property (nonatomic) BOOL descTextNeedLeftAlignment;
@property (nonatomic) NSArray params;
@property (nonatomic) NSArray buttons;
@property (nonatomic) AWEIMSecurityGlobalToastContentConfigModel_UIConfig_OptionModel option;
- (id)headImageURL;
- (void)setHeadImageURL:;
- (id)descText;
- (void)setDescText:;
- (BOOL)descTextNeedLeftAlignment;
- (void)setDescTextNeedLeftAlignment:;
- (void)setButtons:;
- (id)buttons;
- (void)setOption:;
- (void).cxx_destruct;
- (id)title;
- (id)params;
- (void)setTitle:;
- (id)option;
- (void)setParams:;
+ (id)paramsJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)optionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
