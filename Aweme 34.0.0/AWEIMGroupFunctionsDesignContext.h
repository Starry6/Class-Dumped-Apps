@interface AWEIMGroupFunctionsDesignContext : NSObject
@property (nonatomic) Q sceneType;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q aweim_naviBarType;
@property (nonatomic) BOOL onLive;
- (unsigned long long)aweim_naviBarType;
- (void)setAweim_naviBarType:;
- (void)setOnLive:;
- (BOOL)onLive;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end
