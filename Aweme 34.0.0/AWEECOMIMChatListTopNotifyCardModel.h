@interface AWEECOMIMChatListTopNotifyCardModel : NSObject
@property (nonatomic) q supportSDKVersion;
@property (nonatomic) BDPCDDynamicCardParserConfig config;
@property (nonatomic) BDPCDDynamicCardTemplateModel templateModel;
@property (nonatomic) NSString sceneStr;
@property (nonatomic) NSString serverMessageID;
@property (nonatomic) NSDictionary extDict;
- (id)serverMessageID;
- (void)setServerMessageID:;
- (id)extDict;
- (void)setExtDict:;
- (id)trackCommonParams;
- (id)msgCommonTrackParams;
- (id)sceneStr;
- (void)setSceneStr:;
- (void)setSupportSDKVersion:;
- (long long)supportSDKVersion;
- (id)getPathForTemplateCardHttpRequest:;
- (void)generateTemplateModel;
- (id)initWithDict:groupId:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setTemplateModel:;
- (id)templateModel;
+ (void)updateDynamicCardRegisterService;
+ (id)elementHelper;
@end
