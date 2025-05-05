@interface IMEventNotification : IMDoubleLinkedListNode
@property (nonatomic) @ target;
@property (nonatomic) @ sender;
@property (nonatomic) @? eventNotificationBlock;
@property (nonatomic) @? eventNotificationWithSenderBlock;
- (BOOL)wasCancelled;
- (void)cancel;
- (id)sender;
- (BOOL)invoke;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (void)cache;
- (void)setSender:;
- (id)eventNotificationWithSenderBlock;
- (void)setEventNotificationWithSenderBlock:;
- (id)eventNotificationBlock;
- (void)setEventNotificationBlock:;
+ (id)eventNotification:eventNotificationBlock:;
+ (id)eventNotification:sender:eventNotificationBlock:;
+ (id)eventNotification:;
@end
