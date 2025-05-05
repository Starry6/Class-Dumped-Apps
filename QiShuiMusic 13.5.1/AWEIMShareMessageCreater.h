@interface AWEIMShareMessageCreater : NSObject
+ (unsigned long long)convertQuoteReplyTypeToSceneType:;
+ (id)forwardMessageWithForwardMessage:;
+ (id)p_cardMessageContent:;
+ (id)quoteReplyMessageWithAwemeModel:shareText:;
+ (id)sendCardMessageWithAwemeModel:;
+ (id)sendInviteFriendMessageWithContentModel:;
+ (id)sendInviteGroupMessageWithGroupModel:;
+ (id)sendRoomGameMessageWithContentModel:;
+ (id)sendShareH5MessageWithWebViewModel:;
+ (id)sendSharePositiveTrendingMessageWithTrendingModel:;
+ (id)sendShareProfileMessageWithUserModel:;
+ (id)sendShareStickerMessageWithStickerModel:;
+ (id)sendShareTrendingMessageWithTrendingModel:;
+ (id)sendTextMessageWithContent:;
+ (id)sendThirdPartImageMessageWithLinkModel:;
+ (id)sendThirdPartLinkMessageWithLinkModel:;
+ (id)shareChallengeMessageUserCountWithChallengeModel:;
@end
