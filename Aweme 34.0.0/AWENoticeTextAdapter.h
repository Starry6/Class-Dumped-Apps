@interface AWENoticeTextAdapter : NSObject
+ (id)diggTextWithNotificationModel:;
+ (id)commentTextWithNotificationModel:;
+ (id)commentTextAuthorSelfWithNotificationModel:;
+ (id)atTextAuthorSelfWithNotificationModel:;
+ (id)viewerTextWithNotificationModel:;
+ (id)imDisplayTitleWithModel:;
+ (id)latestPushGuideNoticeAbstractInfo:;
+ (id)liteInteractionQuoteReplaceTextIfNeeded:type:isSending:;
+ (id)getTailStrWithTime:withSupplement:;
+ (id)liteInteractionQuoteTextModel:;
+ (id)displayContentWithForwardModel:;
+ (id)getDelNoticeText:unreadCount:;
+ (id)__detailTextWithNotificationAwemeModel:;
+ (BOOL)isLegalModularizationUserName:;
+ (BOOL)isNewModularizationNoticeForNotice:;
+ (id)hintCommentTextWithNotificationType:aweme:text:;
+ (id)fansNoticeDisplayHintWithModel:displayName:content:;
+ (id)diggHintForProfileDisplayHintTextWithModel:;
+ (id)commentHintForProfileDisplayHintTextWithModel:;
+ (id)atHintForProfileDisplayHintTextWithModel:;
+ (id)atHintContentForProfileDisplayHintTextWithModel:;
+ (id)commentHintContentWithNotificationModel:;
+ (BOOL)isLegalModularizationUserSecName:;
+ (id)profileDisplayHintTextWithModel:;
@end
