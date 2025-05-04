@interface AWEIMLinkLiveTextAndButtonMessage : AWEIMTextAndButtonMessage
@property (nonatomic) NSString inviteToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setInviteToken:;
- (id)getContentDict;
- (BOOL)supportRefactorCell;
- (BOOL)canEmojiReplyByDefault;
- (id)defaultMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)inviteToken;
@end
