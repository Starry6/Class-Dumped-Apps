@interface IESLiveMyLiveTabData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMyLiveTab tab;
@property (nonatomic) BOOL hasTab;
+ (id)descriptor;
@end
