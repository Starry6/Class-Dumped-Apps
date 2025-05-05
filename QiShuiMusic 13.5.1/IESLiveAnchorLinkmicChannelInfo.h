@interface IESLiveAnchorLinkmicChannelInfo : IESLivePBBaseMessage
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) IESLiveMultiChannelInfo multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
+ (id)descriptor;
@end
