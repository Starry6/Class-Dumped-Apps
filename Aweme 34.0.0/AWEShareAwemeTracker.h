@interface AWEShareAwemeTracker : NSObject
+ (void)trackMiniSharePlatfromIconWithContext:sharePlatform:;
+ (void)trackShareDetailWithContext:sharePlatform:;
+ (void)trackShareVideoWithContext:shareModel:extraParams:;
+ (void)trackAdShareEventWithContext:;
+ (void)trackLiveSharePanelHeadClickWithContext:shareModel:extraParams:;
+ (id)generateCommomParamsWithShareModel:awemeModel:referString:logExtra:;
+ (void)trackShareTextClickWithContext:;
+ (void)trackShareChannelShowWithTask:;
+ (void)trackShareVideoSuccessWithContext:;
+ (void)trackExitMoreButtonWithContext:extraParams:;
+ (void)trackShareRecentlyChatShowWithShareList:;
+ (void)trackAddFriendsWithActionType:;
+ (void)trackCommonShowWithContext:functionName:firstScreenShow:;
+ (void)trackCommonClickWithContext:functionName:firstScreenShow:;
+ (void)trackIMGroupFriendShareClickWithContext:model:platform:;
+ (void)trackShareEmojiWithContext:platform:;
+ (void)trackShareEmojiSuccessWithContext:platform:;
@end
