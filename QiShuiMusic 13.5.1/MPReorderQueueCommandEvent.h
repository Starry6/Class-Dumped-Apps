@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent
@property (nonatomic) NSString insertBeforeContextItemID;
@property (nonatomic) NSString insertAfterContextItemID;
@property (nonatomic) q destinationOffset;
- (void).cxx_destruct;
- (id)initWithCommand:mediaRemoteType:options:;
- (id)insertBeforeContextItemID;
- (id)insertAfterContextItemID;
- (long long)destinationOffset;
@end
