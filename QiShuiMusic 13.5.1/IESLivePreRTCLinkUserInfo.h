@interface IESLivePreRTCLinkUserInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL rtcPushStream;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) NSInteger linkStatus;
@property (nonatomic) NSString anchorOpenId;
+ (id)descriptor;
@end
