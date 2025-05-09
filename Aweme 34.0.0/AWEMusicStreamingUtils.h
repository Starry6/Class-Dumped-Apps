@interface AWEMusicStreamingUtils : NSObject
+ (BOOL)isPersonalRecommendSwitchOn;
+ (void)setLocalEdit:playlist:;
+ (id)formatTime:;
+ (id)etQueueNameForQueue:mediaModel:;
+ (id)durationAccessibilityLabel:;
+ (long long)collectionReqCountForLoadMore;
+ (id)apiScene;
+ (id)apiValidScene;
+ (id)collectV2Scene;
+ (id)longLyricsAttrString:;
+ (double)heightOfLyricsAttrString:width:;
+ (id)replaceLynxSchemaWithHunter:;
+ (BOOL)lyricsUrlAvailable:type:;
+ (id)accessibilityLabelOfLoopMode:;
+ (id)collectionToast:error:;
+ (BOOL)localEditPlaylist:;
+ (long long)myPlaylistCountForLoadMore;
+ (id)shortLyricsAttrString:;
+ (id)titleOf:;
+ (id)cancelCollectionSuccess;
+ (id)collectionSuccess;
+ (id)collectionFailForShark;
+ (id)cancelCollectionFailForLogin;
+ (id)collectionFailForLogin;
+ (id)cancelCollectionFail;
+ (id)collectionFail;
+ (id)etQueueNameForQueue:;
+ (id)lyricsAttrString:lineHeight:font:;
+ (id)localEditPlaylistKey:;
+ (id)musicTabTitleOfQueueType:;
+ (id)getCoverPicURLFromList:;
+ (id)currentDay;
@end
