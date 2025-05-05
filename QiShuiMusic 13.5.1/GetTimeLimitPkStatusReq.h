@interface GetTimeLimitPkStatusReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) BOOL moreInfo;
+ (id)descriptor;
@end
