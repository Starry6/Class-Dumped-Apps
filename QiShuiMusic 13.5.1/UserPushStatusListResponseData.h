@interface UserPushStatusListResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSInteger total;
+ (id)descriptor;
@end
