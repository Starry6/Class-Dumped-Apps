@interface GetAdminListResponse : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
@property (nonatomic) GetAdminListExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
