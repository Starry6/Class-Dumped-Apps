@interface IESLiveLinkmicStreamInfo : IESLivePBBaseMessage
@property (nonatomic) NSString liveCoreExtInfo;
@property (nonatomic) NSString rtcExtInfo;
+ (id)descriptor;
@end
