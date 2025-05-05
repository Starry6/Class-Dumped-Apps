@interface UpdateTimeLimitPkConfigReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString pkUids;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
