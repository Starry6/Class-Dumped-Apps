@interface PrivilegeBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidLiveType;
@property (nonatomic) NSInteger viewRight;
@property (nonatomic) NSInteger delivery;
+ (id)descriptor;
@end
