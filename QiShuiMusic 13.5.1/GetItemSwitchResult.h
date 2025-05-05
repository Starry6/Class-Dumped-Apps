@interface GetItemSwitchResult : IESLivePBBaseMessage
@property (nonatomic) GetItemSwitchResult_GetItemSwitchData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
