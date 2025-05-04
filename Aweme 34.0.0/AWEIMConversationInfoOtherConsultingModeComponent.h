@interface AWEIMConversationInfoOtherConsultingModeComponent : AWEIMComponentBase
@property (nonatomic) AWEIMConversationConsultModeModel consultModeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (id)vcParent;
- (void)setConsultModeModel:;
- (id)consultModeModel;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
