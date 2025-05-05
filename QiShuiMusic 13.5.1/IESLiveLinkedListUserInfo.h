@interface IESLiveLinkedListUserInfo : IESLivePBBaseMessage
@property (nonatomic) q joinChannelTime;
@property (nonatomic) q expectedLeaveTime;
@property (nonatomic) q currentTime;
+ (id)descriptor;
@end
