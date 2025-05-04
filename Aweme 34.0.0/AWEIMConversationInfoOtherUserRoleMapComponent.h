@interface AWEIMConversationInfoOtherUserRoleMapComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (id)conversationContext;
+ (BOOL)canCreateComponentWithContext:;
@end
