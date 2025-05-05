@interface IESLiveLinkmicInfoData : IESLivePBBaseMessage
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreInfo;
+ (id)descriptor;
@end
