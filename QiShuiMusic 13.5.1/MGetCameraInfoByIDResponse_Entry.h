@interface MGetCameraInfoByIDResponse_Entry : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary vsCameraInfoForEpisode;
@property (nonatomic) Q vsCameraInfoForEpisode_Count;
@property (nonatomic) GPBInt64Array failedEpisodeIdsArray;
@property (nonatomic) Q failedEpisodeIdsArray_Count;
+ (id)descriptor;
@end
