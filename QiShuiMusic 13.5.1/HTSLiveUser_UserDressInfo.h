@interface HTSLiveUser_UserDressInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray dressWearIdsArray;
@property (nonatomic) Q dressWearIdsArray_Count;
@property (nonatomic) NSMutableArray dressOwnIdsArray;
@property (nonatomic) Q dressOwnIdsArray_Count;
+ (id)descriptor;
@end
