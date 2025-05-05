@interface IESLiveUserMyLiveTabResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveMyLiveTabData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
