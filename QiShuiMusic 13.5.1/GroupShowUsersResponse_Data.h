@interface GroupShowUsersResponse_Data : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGroupShowInfo info;
@property (nonatomic) BOOL hasInfo;
+ (id)descriptor;
@end
