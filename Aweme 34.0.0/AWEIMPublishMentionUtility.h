@interface AWEIMPublishMentionUtility : NSObject
@property (nonatomic) Q globalStatusCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)globalStatusCount;
- (void)setGlobalStatusCount:;
- (BOOL)shouldShowPokeButtonWithChat:;
- (void)exitPokeLightInteractionCoreWithChat:;
- (id)titleStringWithMessage:;
- (BOOL)isMentionFeedCardMessageWithMessage:;
- (void)exitPokeLightInteractionCoreWithConversation:;
- (void)increaseGlobalStatusCount;
- (BOOL)shouldTrackPokeLightInteractionWithMessage:;
+ (id)sharedIntance;
@end
