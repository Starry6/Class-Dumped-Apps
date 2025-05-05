@interface IESLiveChorusRankUser_OwnRoom : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array roomIdsArray;
@property (nonatomic) Q roomIdsArray_Count;
@property (nonatomic) NSMutableArray roomIdsStrArray;
@property (nonatomic) Q roomIdsStrArray_Count;
+ (id)descriptor;
@end
