@interface AWEECShoppingGuideMessageSliceSectionModel : AWEECShoppingGuideMessageSectionModel
@property (nonatomic) NSString cardId;
@property (nonatomic) Q cardType;
@property (nonatomic) NSString cardData;
@property (nonatomic) NSString templateName;
@property (nonatomic) NSString templateVersion;
@property (nonatomic) NSString templateData;
@property (nonatomic) NSString leadingText;
- (id)templateData;
- (void)setTemplateData:;
- (void).cxx_destruct;
- (id)leadingText;
- (id)cardId;
- (id)cardData;
- (unsigned long long)cardType;
- (void)setCardType:;
- (void)setCardData:;
- (void)setLeadingText:;
- (void)setCardId:;
- (id)templateVersion;
- (void)setTemplateVersion:;
- (void)setTemplateName:;
- (id)templateName;
+ (id)JSONKeyPathsByPropertyKey;
@end
