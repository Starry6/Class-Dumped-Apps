@interface MultiBattleFinishResponse : IESLivePBBaseMessage
@property (nonatomic) MultiBattleFinishResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
