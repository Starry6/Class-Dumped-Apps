@interface UserPushStatusUpdateResponse : IESLivePBBaseMessage
@property (nonatomic) UserPushStatusUpdateResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
