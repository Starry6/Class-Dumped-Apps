@interface EDBiomeInteractionEventLog : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)persistEvent:date:message:data:;
- (void)persistEvent:dataFromMessage:account:;
- (void)persistEvent:dataFromMessage:;
- (void)donateToBiomeWithEvent:;
- (void).cxx_destruct;
- (void)persistEvent:date:conversationID:data:;
- (void)persistEvent:date:message:mailboxType:;
- (void)persistEvent:date:message:mailbox:;
+ (id)log;
+ (id)payloadFromData:message:;
@end
