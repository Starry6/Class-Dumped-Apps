@interface SilenceRes : IESLivePBBaseMessage
@property (nonatomic) q total;
@property (nonatomic) q maxCount;
@property (nonatomic) q roomId;
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
+ (id)descriptor;
@end
