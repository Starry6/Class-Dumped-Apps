@interface MultiBattleOpenResponse : IESLivePBBaseMessage
@property (nonatomic) MultiBattleOpenResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
