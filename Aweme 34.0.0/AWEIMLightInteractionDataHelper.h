@interface AWEIMLightInteractionDataHelper : NSObject
+ (id)sendHintDisplayTextWithMessage:;
+ (id)innerPushDisplayTextWithMessage:;
+ (id)configShowingActionBarReplyButtonForMessage:;
+ (id)allLightInteractionsForVirtualAvatars;
+ (void)preloadIconsIfNeeded;
+ (id)replyActionBarItemWithMessage:;
+ (void)p_prefetchURLString:;
+ (id)specialSceneHintDisplayTextWithMessage:;
@end
