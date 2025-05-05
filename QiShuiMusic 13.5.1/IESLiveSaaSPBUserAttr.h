@interface IESLiveSaaSPBUserAttr : GPBMessage
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isSuperAdmin;
@property (nonatomic) GPBEnumArray adminPrivilegesArray;
@property (nonatomic) Q adminPrivilegesArray_Count;
+ (id)descriptor;
@end
