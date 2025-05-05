@interface UserFriendListResponse : IESLivePBBaseMessage
@property (nonatomic) UserFriendListResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
