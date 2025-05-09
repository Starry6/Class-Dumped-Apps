@interface IESLiveInteractionFanTicketViewModel : NSObject
@property (nonatomic) BOOL isIdle;
@property (nonatomic) NSMutableArray cachedNodes;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) q maxCount;
@property (nonatomic) IESLiveInteractionEmojiModel thankEmojiModel;
@property (nonatomic) <IESLiveInteractionFanTicketDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCachedNodes:;
- (id)thankEmojiModel;
- (id)cachedNodes;
- (void)clearCachedThankNodeWithReceivedGiftUserID:thankedUserID:;
- (void)didFanticketUpdateFinish;
- (void)didSendEmoji:fromUserID:toUserID:;
- (void)didSetAttachingDIContext;
- (void)doFanticketAnimationWithNode:;
- (BOOL)enableQuickInteract;
- (id)getLastCachedNode;
- (id)initWithDelegate:diContext:;
- (void)sendThankEmojiWithToUserID:;
- (void)setIsIdle:;
- (void)setThankEmojiModel:;
- (void)trackQuickThankShowWithSendGiftUserID:;
- (void)updateFanticket:nodeBuilder:;
- (void)updateFanticket:quickInteract:;
- (long long)maxCount;
- (BOOL)isAnimating;
- (void)setMaxCount:;
- (void)setDelegate:;
- (void)clear;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isIdle;
- (void)setQueue:;
- (id)queue;
@end
