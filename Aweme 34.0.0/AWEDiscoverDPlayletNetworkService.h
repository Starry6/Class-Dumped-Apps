@interface AWEDiscoverDPlayletNetworkService : NSObject
@property (nonatomic) NSHashTable hashTable;
- (id)hashTable;
- (void)setHashTable:;
- (void).cxx_destruct;
+ (id)requestPlayletVideoList:cursor:count:pullDown:disableInsertAd:requestParams:completeBlock:;
+ (void)requestPlayletDetailInfo:completeBlock:;
+ (void)requestPlayletCollectWithID:action:completeBlock:;
+ (void)savePlayletID:playCurrentEpisode:;
+ (void)requestPaymentMixVideoWithAwemeID:uploadTrack:;
+ (void)requestPaymentVideoWithAwemeID:referString:playProgress:uploadTrack:isIgnore302Error:;
+ (void)requestIAAPaymentVideoWithAwemeID:uploadTrack:afterLogin:;
+ (void)requestIAAPaymentVideoWithAwemeID:referString:playProgress:uploadTrack:completion:;
+ (void)requestLoginBeforePlayletCollectWithCompleteBlcok:;
+ (id)lastReadEpisodeForPlayletID:;
+ (void)requestPlayletDetailInfo:requestParams:completeBlock:;
+ (void)requestAWEDiscoverDPlayletSwipeGuidanceResponseModelWithOriginPlayletAwemeModel:extraParams:completion:;
+ (id)adRequestParamsWithExtraParams:;
+ (void)requestPlayletUserList:cursor:count:completeBlock:;
+ (void)requestPlayletUserProfileTabList:cursor:count:completeBlock:;
+ (void)requestPlayletRecommendListWithPlayletIDs:completeBlock:;
+ (void)savePlayletHistoryWithID:playCurrentEpisode:awemeID:materialType:;
+ (void)requestPlayletOrderWithParams:completeBlock:;
+ (void)requestPlayletPaymetVideosWithPlayletID:completeBlock:;
+ (void)uploadPaymentVideoWatchRecord:completion:;
+ (void)registerObserver:;
+ (id)shareInstance;
@end
