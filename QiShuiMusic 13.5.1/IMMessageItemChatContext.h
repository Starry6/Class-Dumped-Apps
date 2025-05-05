@interface IMMessageItemChatContext : IMItemChatContext
@property (nonatomic) IMMessage message;
@property (nonatomic) BOOL invitation;
- (void)dealloc;
- (void)setMessage:;
- (BOOL)invitation;
- (void)setInvitation:;
- (id)message;
- (void).cxx_destruct;
@end
