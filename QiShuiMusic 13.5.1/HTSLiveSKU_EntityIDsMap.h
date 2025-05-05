@interface HTSLiveSKU_EntityIDsMap : IESLivePBBaseMessage
@property (nonatomic) NSInteger entityType;
@property (nonatomic) GPBInt64Array releatedEntityIdsArray;
@property (nonatomic) Q releatedEntityIdsArray_Count;
+ (id)descriptor;
@end
