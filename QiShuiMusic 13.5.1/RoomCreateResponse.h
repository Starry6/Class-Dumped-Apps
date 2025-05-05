@interface RoomCreateResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoom data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
