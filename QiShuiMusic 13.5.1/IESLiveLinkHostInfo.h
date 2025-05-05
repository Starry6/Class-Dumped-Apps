@interface IESLiveLinkHostInfo : IESLivePBBaseMessage
@property (nonatomic) q isHost;
@property (nonatomic) NSString hostPositionName;
+ (id)descriptor;
@end
