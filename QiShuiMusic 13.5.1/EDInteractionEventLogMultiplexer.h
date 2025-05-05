@interface EDInteractionEventLogMultiplexer : NSObject
@property (nonatomic) NSArray logs;
- (id)logs;
- (void)persistEvent:date:message:data:;
- (void)setLogs:;
- (void)persistEvent:dataFromMessage:account:;
- (void)persistEvent:dataFromMessage:;
- (id)initWithLogs:;
- (void).cxx_destruct;
- (void)persistEvent:date:conversationID:data:;
- (void)persistEvent:date:message:mailboxType:;
- (id)description;
- (void)persistEvent:date:message:mailbox:;
@end
