@interface AWEIMJSONSmartAssistantSuggestMsg : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString question;
@property (nonatomic) q questionID;
@property (nonatomic) q knowledgeBaseID;
@property (nonatomic) NSString version;
@property (nonatomic) q suggestMsgID;
@property (nonatomic) NSString type;
@property (nonatomic) AWEIMJSONSmartAssistantComponetInfo componentInfo;
@property (nonatomic) NSString actionID;
@property (nonatomic) NSString source;
@property (nonatomic) NSString layerIconLight;
@property (nonatomic) NSString layerIconDark;
@property (nonatomic) NSString panelIconLight;
@property (nonatomic) NSString panelIconDark;
- (id)layerIconDark;
- (id)layerIconLight;
- (id)panelIconDark;
- (id)panelIconLight;
- (void)setLayerIconLight:;
- (void)setLayerIconDark:;
- (void)setPanelIconLight:;
- (void)setPanelIconDark:;
- (long long)knowledgeBaseID;
- (long long)suggestMsgID;
- (void)setKnowledgeBaseID:;
- (void)setSuggestMsgID:;
- (id)content;
- (id)version;
- (id)type;
- (void)setVersion:;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)actionID;
- (id)componentInfo;
- (void)setComponentInfo:;
- (id)question;
- (long long)questionID;
- (void)setQuestionID:;
- (void)setActionID:;
- (void)setQuestion:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)componentInfoJSONTransformer;
@end
