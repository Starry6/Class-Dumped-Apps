@interface IESLiveDanmakuNodeAttrCreateParams : NSObject
@property (nonatomic) HTSLiveTemplateEngineConfiguration config;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) <IESLiveDanmakuEngineSettingsProtocol> setting;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) <HTSLiveTemplateProviderAdapter> templateProvider;
- (id)defaultContent;
- (void)setDefaultContent:;
- (void)setConfig:;
- (void)setFont:;
- (id)displayText;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)font;
- (id)textColor;
- (void)setDisplayText:;
- (id)config;
- (id)setting;
- (void)setSetting:;
- (id)templateProvider;
- (void)setTemplateProvider:;
@end
