@interface FlexActivity_RegisteredUserGroup : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) NSString emptyText;
+ (id)descriptor;
@end
