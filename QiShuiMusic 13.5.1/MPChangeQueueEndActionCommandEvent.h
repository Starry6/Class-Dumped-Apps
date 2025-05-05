@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) q queueEndAction;
@property (nonatomic) BOOL preservesQueueEndAction;
- (long long)queueEndAction;
- (BOOL)preservesQueueEndAction;
- (id)initWithCommand:mediaRemoteType:options:;
@end
