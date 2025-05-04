@interface AWEIMInfoOtherConsumptionEndInteractor : AWEIMComponentBase
@property (nonatomic) AWEIMMessageBaseViewController vcParent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (id)vcParent;
+ (BOOL)canCreateComponentWithContext:;
@end
