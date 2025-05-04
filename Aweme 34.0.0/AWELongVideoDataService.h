@interface AWELongVideoDataService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)collectLongVideo:isCollected:completeBlock:;
+ (id)fetchLongVideoListWithParams:completion:;
+ (id)fetchLongVideoWidgetMetaInfoWithAlbumID:episodeID:completion:;
+ (id)fetchLongVideoMetaInfoWithAlbumID:sceneType:isFromTheater:requestFrom:completion:;
+ (id)fetchLongVideoScreenCastUISettingWithParams:completion:;
+ (void)fetchLongVideoWatchHistoryWithAlbumID:completion:;
+ (id)fetchSelectEpisodeMetaDetailWithAlbumID:episodeID:awemeID:cursor:count:completion:;
+ (id)fetchSelectEpisodeAwemeListWithAlbumID:seriesID:cursor:count:completion:;
+ (id)fetchSelectEpisodeListWithAlbumID:cursor:count:completion:;
+ (id)fetchLongVideoListWithAlbumID:episodeID:itemID:extraParams:completion:;
+ (id)fetchLongVideoPlusAwemeListWithParams:completion:;
+ (id)fetchLongVideoPlusEpisodeListWithParams:completion:;
+ (id)fetchLongVideoPlusMetaInfoWithAlbumID:episodeID:awemeID:cursor:count:completion:;
@end
