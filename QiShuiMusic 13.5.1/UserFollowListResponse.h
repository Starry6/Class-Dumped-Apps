@interface UserFollowListResponse : IESLivePBBaseMessage
@property (nonatomic) UserFollowListResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
