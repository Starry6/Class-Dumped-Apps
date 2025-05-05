@interface PortalPingResponse_Data : IESLivePBBaseMessage
@property (nonatomic) q nextTimePing;
@property (nonatomic) q luckyMoneyCountDown;
@property (nonatomic) BOOL valid;
@property (nonatomic) q luckyMoneyCloseCountDown;
+ (id)descriptor;
@end
