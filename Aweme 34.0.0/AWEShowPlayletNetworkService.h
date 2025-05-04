@interface AWEShowPlayletNetworkService : NSObject
+ (id)uploadReCreationVideoWatchRecord:tagId:progress:completion:;
+ (id)requestPlayletVideoList:cursor:count:pullDown:disableInsertAd:requestParams:completeBlock:;
+ (id)requestSeriesCardFeed:completion:;
@end
