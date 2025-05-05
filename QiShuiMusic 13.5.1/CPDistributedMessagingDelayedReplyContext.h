@interface CPDistributedMessagingDelayedReplyContext : NSObject
@property (nonatomic) I replyPort;
@property (nonatomic) BOOL portPassing;
- (void)dealloc;
- (unsigned int)replyPort;
- (id)initWithReplyPort:portPassing:;
- (void)setReplyPort:;
- (BOOL)portPassing;
- (void)setPortPassing:;
@end
