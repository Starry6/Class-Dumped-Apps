@interface AWEECOMIMDynamicCardPerfEvent : MTLModel
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString templateName;
@property (nonatomic) NSString templateURL;
@property (nonatomic) NSString templateFrom;
@property (nonatomic) NSString geckoVersion;
@property (nonatomic) BOOL success;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizCode;
- (void)setErrorMsg:;
- (id)errorMsg;
- (void)setBizCode:;
- (id)geckoVersion;
- (void)setGeckoVersion:;
- (id)templateFrom;
- (void)setTemplateFrom:;
- (void)setSuccess:;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setTemplateURL:;
- (id)templateURL;
- (void)setTemplateName:;
- (id)templateName;
+ (id)JSONKeyPathsByPropertyKey;
@end
