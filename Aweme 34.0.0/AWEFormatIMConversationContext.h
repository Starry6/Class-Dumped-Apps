@interface AWEFormatIMConversationContext : AWEIMComponentContext
@property (nonatomic) <IESIMConversationInjectTemplateProtocol> injectTemplate;
@property (nonatomic) Q bizSceneTag;
@property (nonatomic) NSDictionary bizParams;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizParams;
- (void)setBizParams:;
- (id)logParams;
- (void)setLogParams:;
- (id)injectTemplate;
- (void)setInjectTemplate:;
- (unsigned long long)bizSceneTag;
- (void)setBizSceneTag:;
- (id)init;
- (void).cxx_destruct;
@end
