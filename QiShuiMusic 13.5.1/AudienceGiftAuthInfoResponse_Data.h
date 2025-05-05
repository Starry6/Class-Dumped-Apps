@interface AudienceGiftAuthInfoResponse_Data : IESLivePBBaseMessage
@property (nonatomic) BOOL hasAudienceAuthSwitch;
@property (nonatomic) q authSwitch;
+ (id)descriptor;
@end
