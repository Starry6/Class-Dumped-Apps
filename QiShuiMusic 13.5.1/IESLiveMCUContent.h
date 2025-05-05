@interface IESLiveMCUContent : IESLivePBBaseMessage
@property (nonatomic) NSString currentStreamId;
@property (nonatomic) NSString rivalsStreamId;
+ (id)descriptor;
@end
