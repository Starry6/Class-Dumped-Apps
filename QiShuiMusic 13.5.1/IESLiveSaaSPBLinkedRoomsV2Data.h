@interface IESLiveSaaSPBLinkedRoomsV2Data : GPBMessage
@property (nonatomic) IESLiveSaaSPBVSLinkInfo linkInfo;
@property (nonatomic) BOOL hasLinkInfo;
@property (nonatomic) GPBInt64ObjectDictionary roomEpisodeMap;
@property (nonatomic) Q roomEpisodeMap_Count;
+ (id)descriptor;
@end
