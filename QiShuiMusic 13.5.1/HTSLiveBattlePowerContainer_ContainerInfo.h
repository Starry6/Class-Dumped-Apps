@interface HTSLiveBattlePowerContainer_ContainerInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString clientPointInfo;
+ (id)descriptor;
@end
