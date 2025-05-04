@interface AWELiveCommonMapper : NSObject
+ (id)mapRoomModel:;
+ (id)mapUserWithRoom:;
+ (id)episodeExtraForRoom:;
+ (id)mapUserWithEpisode:;
+ (id)vsCameraInfoForRoom:;
+ (id)episodeExtraForEpisode:;
+ (id)mapEpisodeModelWithRoom:;
+ (id)mapEpisodeModelWithEpisode:;
+ (id)mapRoomModelWithEpisode:;
+ (unsigned long long)mapQRCodeTypeWithType:;
+ (long long)mapPlatformWithShareType:;
+ (id)mapShareTypeWithInsideType:;
@end
