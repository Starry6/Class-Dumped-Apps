@interface UserResponse : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) UserExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
