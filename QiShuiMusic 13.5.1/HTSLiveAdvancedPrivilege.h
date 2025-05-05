@interface HTSLiveAdvancedPrivilege : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) q privilegeSwitch;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString iconURL;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) NSMutableArray anchorOptionIdsArray;
@property (nonatomic) Q anchorOptionIdsArray_Count;
@property (nonatomic) NSString configId;
@property (nonatomic) NSString rejectReason;
@property (nonatomic) q received;
@property (nonatomic) BOOL canQuickstartMemberWebcast;
@property (nonatomic) q memberCountInRoom;
+ (id)descriptor;
@end
