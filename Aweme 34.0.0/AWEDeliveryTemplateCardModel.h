@interface AWEDeliveryTemplateCardModel : AWEDeliveryBaseMsgModel
@property (nonatomic) NSDictionary dynamicData;
@property (nonatomic) BOOL systemMsgStyle;
@property (nonatomic) BOOL isLastElementFootTips;
@property (nonatomic) q supportSDKVersion;
@property (nonatomic) BDPCDDynamicCardTemplateModel templateModel;
- (BOOL)isSystemMsgStyle;
- (BOOL)isLastElementFootTips;
- (void)setSupportSDKVersion:;
- (long long)supportSDKVersion;
- (id)getPathForTemplateCardHttpRequest:;
- (id)dynamicData;
- (void)setDynamicData:;
- (void)setSystemMsgStyle:;
- (void)setIsLastElementFootTips:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)initWithMessage:;
- (void)setTemplateModel:;
- (id)templateModel;
+ (Class)cellClass;
@end
