@interface IMItemChatContext : NSObject
@property (nonatomic) IMHandle senderHandle;
@property (nonatomic) IMHandle otherHandle;
- (void)dealloc;
- (id)senderHandle;
- (void).cxx_destruct;
- (void)setSenderHandle:;
- (void)setOtherHandle:;
- (id)otherHandle;
@end
