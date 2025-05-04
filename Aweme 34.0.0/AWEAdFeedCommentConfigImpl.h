@interface AWEAdFeedCommentConfigImpl : NSObject
+ (BOOL)isColorWhite;
+ (id)defaultAvatarImage;
+ (id)commentTextColor;
+ (id)highlightBackgroudColor:;
+ (id)likeLabelNormalTextColor;
+ (id)defaultAvatarColor;
+ (id)avatarImageWithColor:;
+ (id)filterTextSelectedColor;
+ (id)filterTextNormalColor;
+ (id)filterBackgroundSelectedColor;
+ (id)filterBackgroundNormalColor;
+ (id)replyTextColor;
+ (id)retryButtonColor;
+ (id)defaultTagBackgroundColor;
+ (id)defaultTagTextColor;
+ (id)landingCommentIconColor;
+ (id)likeCountsString:;
+ (void)setColorMode:;
+ (id)backgroundColor;
+ (id)timeTextColor;
+ (double)avatarWidth;
+ (id)nameTextColor;
@end
