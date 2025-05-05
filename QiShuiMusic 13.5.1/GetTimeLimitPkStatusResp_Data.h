@interface GetTimeLimitPkStatusResp_Data : IESLivePBBaseMessage
@property (nonatomic) NSInteger pkStatus;
@property (nonatomic) TimeLimitPkInfo pkInfo;
@property (nonatomic) BOOL hasPkInfo;
+ (id)descriptor;
@end
