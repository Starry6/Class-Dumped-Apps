@interface ICLiveLinkEvent : NSObject
@property (nonatomic) ICLiveLinkIdentity participant;
@property (nonatomic) q type;
@property (nonatomic) ICLiveLinkSessionEvent sessionEvent;
@property (nonatomic) ICLiveLinkPlaybackEvent playbackEvent;
@property (nonatomic) ICLiveLinkQueueEvent queueEvent;
@property (nonatomic) ICLiveLinkReactionEvent reactionEvent;
@property (nonatomic) ICLiveLinkCustomEvent customEvent;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)participant;
- (id)_initWithType:participant:;
- (id)sessionEvent;
- (id)playbackEvent;
- (id)queueEvent;
- (id)reactionEvent;
- (id)customEvent;
+ (id)eventWithSessionEvent:participant:;
+ (id)eventWithPlaybackEvent:participant:;
+ (id)eventWithQueueEvent:participant:;
+ (id)eventWithReactionEvent:participant:;
+ (id)eventWithCustomEvent:participant:;
@end
