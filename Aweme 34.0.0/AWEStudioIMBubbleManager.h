@interface AWEStudioIMBubbleManager : NSObject
+ (BOOL)shouldShowSyncToFriendsBubble:;
+ (void)markDidShownSyncToFriendsBubble;
+ (BOOL)shouldShowWatchOnceBubble:;
+ (void)markDidShownWatchOnceBubble;
@end
