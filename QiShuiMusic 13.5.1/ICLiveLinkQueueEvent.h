@interface ICLiveLinkQueueEvent : NSObject
@property (nonatomic) q kind;
@property (nonatomic) ICLiveLinkQueueEventContentAdded contentAdded;
@property (nonatomic) ICLiveLinkQueueEventContentPlayedNow contentPlayedNow;
@property (nonatomic) ICLiveLinkQueueEventContentRemoved contentRemoved;
@property (nonatomic) ICLiveLinkQueueEventContentReordered contentReordered;
@property (nonatomic) ICLiveLinkQueueEventContentReplaced contentReplaced;
@property (nonatomic) ICLiveLinkQueueEventContentUpdatedMessage contentUpdatedMessage;
@property (nonatomic) ICLiveLinkQueueEventPlaybackModeChanged playbackModeChanged;
- (long long)kind;
- (void).cxx_destruct;
- (id)description;
- (id)contentAdded;
- (id)contentPlayedNow;
- (id)contentRemoved;
- (id)contentReordered;
- (id)contentReplaced;
- (id)contentUpdatedMessage;
- (id)playbackModeChanged;
+ (id)queueEventWithContentAdded:;
+ (id)queueEventWithContentPlayedNow:;
+ (id)queueEventWithContentRemoved:;
+ (id)queueEventWithContentReordered:;
+ (id)queueEventWithContentReplaced:;
+ (id)queueEventWithContentUpdatedMessage:;
+ (id)queueEventWithPlaybackModeChanged:;
@end
