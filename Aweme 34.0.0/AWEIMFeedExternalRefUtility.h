@interface AWEIMFeedExternalRefUtility : NSObject
+ (id)minVersionConfigDict;
+ (BOOL)isFeedExternalRefMessage:;
+ (id)itemIDForFeedExternalRefMessage:;
+ (BOOL)shouldNotShowNaviTitleInDetailVCWithAweType:sceneType:refUid:;
+ (id)externalRefUnavailableString:;
+ (BOOL)shouldShowCommentLabelWithRefContent:;
+ (BOOL)isCommentAvailable:;
+ (BOOL)needFetchCommentStatusWithCommentID:sceneType:;
+ (BOOL)shouldShowBriefCommentLabel:;
+ (id)commentLabelAttributedStringWithText:commentContentType:shouldShowBriefCommentLabel:;
+ (BOOL)externalRefContentIsAvailable:;
+ (id)getCoverSizeWithExternalRecContent:;
+ (BOOL)needShowCloseFriendsFeedWithAweType:;
+ (id)getCoverSizeWithOriginalWidth:originalHeight:aweType:outSceneType:extra:;
+ (BOOL)needShowCloseFriendsFeedWithAweType:refType:;
+ (BOOL)shouldUseNowTypeOriginSizeWithAweType:extra:;
+ (BOOL)shouldMomentUseOriginSizeWithAweType:;
+ (BOOL)shouldShowCollapseMediaControllerWithSceneType:;
@end
