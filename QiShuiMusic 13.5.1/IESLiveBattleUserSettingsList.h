@interface IESLiveBattleUserSettingsList : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
@property (nonatomic) NSString nextCursor;
+ (id)descriptor;
@end
