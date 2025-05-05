@interface HTSLiveRoomRevenueData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveOpenGame openGame;
@property (nonatomic) BOOL hasOpenGame;
+ (id)descriptor;
@end
