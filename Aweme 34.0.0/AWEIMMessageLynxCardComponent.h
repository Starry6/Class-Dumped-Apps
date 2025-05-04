@interface AWEIMMessageLynxCardComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)messageListVC;
- (void)onAwemeAvailableStatusChange:conversationID:extraInfo:msg:itemID:;
- (void)dealloc;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
