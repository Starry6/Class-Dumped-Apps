@interface AWEIMChatForceInsertComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatForceInsertNode firstDecisionNode;
@property (nonatomic) <AWEIMForceInsertChatProtocol> currentInsertComponent;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)componentDidMounted:;
- (void)loadForceInsertData;
- (void)retryHandlePriorityDecision:;
- (void)manageInsertedChat:operation:needReload:;
- (BOOL)isForceInsertChatWithSessionId:;
- (void)insertFtsInitIfNeed;
- (id)searchChatWithID:;
- (void)handlePriorityDecision;
- (id)currentInsertComponent;
- (id)p_priorityStringWithType:;
- (void)setFirstDecisionNode:;
- (void)setCurrentInsertComponent:;
- (id)firstDecisionNode;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
+ (id)componentWithContext:;
@end
