@interface HTSLiveUser_UserAttr : IESLivePBBaseMessage
@property (nonatomic) BOOL isBlack;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isSuperAdmin;
@property (nonatomic) GPBEnumArray adminPrivilegesArray;
@property (nonatomic) Q adminPrivilegesArray_Count;
- (void)setIsBlack:;
- (BOOL)isBlack;
+ (id)descriptor;
@end
