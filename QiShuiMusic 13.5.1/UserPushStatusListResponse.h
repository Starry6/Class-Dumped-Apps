@interface UserPushStatusListResponse : IESLivePBBaseMessage
@property (nonatomic) UserPushStatusListResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
