@interface HTSLiveRoomReqUserData : IESLivePBBaseMessage
@property (nonatomic) float userShareRoomScore;
@property (nonatomic) NSInteger enterUserDeviceType;
+ (id)descriptor;
@end
