@interface AWEIMQuoteReplyUtility : NSObject
+ (id)coverSizeWithOriginCoverSize:;
+ (id)replyYouStringWithSenderName:;
+ (id)quoteTitleWithMaxWidth:title:tailString:;
+ (id)quoteTitleForRecommendAwemeToFriendsWithMessage:;
+ (double)preferQuoteTitleMaxWidthWithSceneType:;
+ (id)quoteTitleForReplyGroupUnreadVideo:replyUid:sceneType:;
+ (BOOL)quoteContentIsAvailableWithMessage:;
@end
