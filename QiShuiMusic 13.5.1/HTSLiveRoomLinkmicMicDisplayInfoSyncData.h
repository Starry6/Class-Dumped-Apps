@interface HTSLiveRoomLinkmicMicDisplayInfoSyncData : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) GPBInt64ObjectDictionary roomDisplayInfo;
@property (nonatomic) Q roomDisplayInfo_Count;
+ (id)descriptor;
@end
