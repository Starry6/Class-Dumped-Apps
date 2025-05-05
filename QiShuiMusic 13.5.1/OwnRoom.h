@interface OwnRoom : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array roomIdsArray;
@property (nonatomic) Q roomIdsArray_Count;
@property (nonatomic) NSMutableArray roomIdsStrArray;
@property (nonatomic) Q roomIdsStrArray_Count;
@property (nonatomic) GPBInt32Array roomIdsDisplayArray;
@property (nonatomic) Q roomIdsDisplayArray_Count;
+ (id)descriptor;
@end
