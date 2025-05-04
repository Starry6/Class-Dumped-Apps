@interface AWEIMChatListTransformComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didTransferToChat:entryType:isPushByFromVC:extraParams:completion:;
- (void)didDeleteChat:;
@end
