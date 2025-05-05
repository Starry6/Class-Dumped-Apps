@interface HTSLiveJoinGroupChatGuideContent : IESLivePBBaseMessage
@property (nonatomic) q groupId;
@property (nonatomic) NSString conversationId;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString bodyText;
@property (nonatomic) NSMutableArray iconsArray;
@property (nonatomic) Q iconsArray_Count;
+ (id)descriptor;
@end
