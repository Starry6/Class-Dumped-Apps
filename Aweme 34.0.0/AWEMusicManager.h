@interface AWEMusicManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)requestMusicItemWithID:completion:;
+ (void)requestCollectingAWEMusicWithID:type:completion:;
+ (void)requestCollectingAWEMusicWithID:videoId:type:completion:;
+ (void)requestAwemeListWithID:pullType:cursor:count:extraParams:completion:;
+ (id)localMusicNewestTitleWithMusicID:;
+ (void)requestMusicRelatedItemsWithID:type:scene:extraParams:completion:;
+ (void)requestInspirationWithParams:completion:;
+ (void)addLocalMusicNewestTitleCache:title:;
+ (id)getMusicListExpectedSizeInfo;
+ (void)requestMusicRelatedItemsWithID:type:completion:;
+ (void)requestMusicRelatedItemsWithID:type:scene:completion:;
+ (id)getMusicDetailExpectedSizeInfo;
+ (id)newestTitleCache;
+ (void)uploadAudioFileData:params:completion:;
+ (void)requestAwemeListWithID:pullType:cursor:count:completion:;
+ (void)requestMusicRelatedItemsWithID:completion:;
+ (void)setNewestTitleCache:;
@end
