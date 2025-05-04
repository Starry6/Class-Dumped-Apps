@interface AWEIMJSONSmartAssistantComponetInfo : AWEBaseApiModel
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString answer;
@property (nonatomic) q msgType;
@property (nonatomic) NSString content;
@property (nonatomic) NSString name;
@property (nonatomic) NSString componentType;
@property (nonatomic) q componentMsgType;
- (long long)componentMsgType;
- (void)setComponentMsgType:;
- (id)content;
- (id)componentType;
- (void)setContent:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setComponentID:;
- (id)componentID;
- (id)answer;
- (void)setAnswer:;
- (long long)msgType;
- (void)setMsgType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
