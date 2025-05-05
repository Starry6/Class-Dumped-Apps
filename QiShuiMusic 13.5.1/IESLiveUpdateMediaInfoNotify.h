@interface IESLiveUpdateMediaInfoNotify : IESLivePBBaseMessage
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) q position;
+ (id)descriptor;
@end
