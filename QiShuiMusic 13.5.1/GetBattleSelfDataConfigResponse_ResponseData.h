@interface GetBattleSelfDataConfigResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) SelfDataConfig selfConfig;
@property (nonatomic) BOOL hasSelfConfig;
+ (id)descriptor;
@end
