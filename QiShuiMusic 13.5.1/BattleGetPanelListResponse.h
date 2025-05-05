@interface BattleGetPanelListResponse : IESLivePBBaseMessage
@property (nonatomic) BattleGetPanelListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
