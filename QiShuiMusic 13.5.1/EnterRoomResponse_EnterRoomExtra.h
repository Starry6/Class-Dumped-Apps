@interface EnterRoomResponse_EnterRoomExtra : IESLivePBBaseMessage
@property (nonatomic) q diggColor;
@property (nonatomic) q payScores;
@property (nonatomic) HTSLiveMemberMessage enterMsg;
@property (nonatomic) BOOL hasEnterMsg;
@property (nonatomic) BOOL isOfficialChannel;
@property (nonatomic) EnterRoomResponse_EnterRoomExtra_RoomExtraSetting roomSettings;
@property (nonatomic) BOOL hasRoomSettings;
@property (nonatomic) NSInteger roomExtraType;
+ (id)descriptor;
@end
