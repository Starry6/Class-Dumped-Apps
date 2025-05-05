@interface HTSLiveBattlePowerContainerMessage_ReverseInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q reverseCount;
@property (nonatomic) NSString des;
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSString effectType;
+ (id)descriptor;
@end
