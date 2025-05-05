@interface FTMessageQueue : NSObject
@property (nonatomic) NSMutableArray _queue;
@property (nonatomic) NSMutableArray _addDates;
@property (nonatomic) IDSBaseMessage topMessage;
@property (nonatomic) q count;
@property (nonatomic) NSArray messages;
@property (nonatomic) <FTMessageQueueDelegate> delegate;
- (id)_addDates;
- (id)init;
- (void)_setTimeout;
- (id)messages;
- (void)setDelegate:;
- (id)messageForUniqueID:;
- (void)_timeoutHit;
- (BOOL)removeMessage:;
- (id)delegate;
- (void)set_addDates:;
- (void).cxx_destruct;
- (id)dequeueTopMessage;
- (void)_clearTimeout;
- (void)set_queue:;
- (id)topMessage;
- (long long)count;
- (BOOL)addMessageAtHeadOfQueue:;
- (id)_queue;
- (BOOL)addMessage:;
- (void)removeAllMessages;
@end
