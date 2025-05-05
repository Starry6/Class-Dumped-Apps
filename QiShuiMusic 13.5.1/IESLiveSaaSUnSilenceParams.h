@interface IESLiveSaaSUnSilenceParams : GPBMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString toUserOpenId;
@property (nonatomic) NSString toUnionId;
@property (nonatomic) BOOL enforced;
+ (id)descriptor;
@end
