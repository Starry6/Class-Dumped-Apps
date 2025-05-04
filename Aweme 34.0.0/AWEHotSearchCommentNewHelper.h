@interface AWEHotSearchCommentNewHelper : NSObject
+ (long long)indexToOuterTabType:;
+ (id)getDiscussPVDesc:;
+ (void)clearUserIdentities;
+ (void)transferToHotSearchFusionPage:extraParams:;
+ (long long)outerTabTypeToIndex:;
+ (id)splitString:targetWidth:maxLines:font:;
+ (void)randomAvatarsWithContext:targetAvatarView:completion:;
+ (id)hotListInfoWith:;
+ (id)allAvatarsURLModelWithCommentCardList:;
+ (void)preLoadLatestCommentWithContext:completion:;
+ (long long)feedTabTypeToIndex:;
+ (long long)indexToFeedTabType:;
+ (id)hotSpotHasInsertSet;
+ (id)selectHighQualityComment:;
+ (id)addInsertInfo:;
+ (id)selectMostDiggComment:;
+ (id)userIdentities;
@end
