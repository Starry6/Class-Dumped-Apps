@interface HTSLiveRoomLinkmicMicDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSMutableDictionary micDressInfo;
@property (nonatomic) Q micDressInfo_Count;
+ (id)descriptor;
@end
