@interface AWEIMCollapsibleBannerTracker : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackBannerClickEventWithClickType:type:;
- (id)__ownerIdEntry;
- (id)__conversationIdEntry;
- (id)__userRoleEntry;
- (void)trackBannerShowEventWithType:;
- (void)trackConfirmStickOnTopMessageWithIconType:enterMethod:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
@end
