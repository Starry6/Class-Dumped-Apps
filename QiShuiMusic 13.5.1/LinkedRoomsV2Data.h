@interface LinkedRoomsV2Data : IESLivePBBaseMessage
@property (nonatomic) HTSLiveVSLinkInfo linkInfo;
@property (nonatomic) BOOL hasLinkInfo;
@property (nonatomic) GPBInt64ObjectDictionary roomEpisodeMap;
@property (nonatomic) Q roomEpisodeMap_Count;
+ (id)descriptor;
@end
