@interface HTSLiveDesireInfo : IESLivePBBaseMessage
@property (nonatomic) q desireId;
@property (nonatomic) NSString desireIdStr;
+ (id)descriptor;
@end
