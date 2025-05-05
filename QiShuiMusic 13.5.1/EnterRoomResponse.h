@interface EnterRoomResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoom data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) EnterRoomResponse_EnterRoomExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
