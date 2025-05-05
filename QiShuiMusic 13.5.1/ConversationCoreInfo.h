@interface ConversationCoreInfo : IESLivePBBaseMessage
@property (nonatomic) NSString conShortId;
@property (nonatomic) NSString name;
@property (nonatomic) q memberCount;
@property (nonatomic) q memberCountLimit;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) q createTime;
@property (nonatomic) BOOL visible;
@property (nonatomic) NSString requirement;
@property (nonatomic) NSInteger applyStatus;
@property (nonatomic) NSString conId;
@property (nonatomic) NSString notice;
@property (nonatomic) q ownerUid;
@property (nonatomic) NSMutableArray fulfilledRequirementsArray;
@property (nonatomic) Q fulfilledRequirementsArray_Count;
@property (nonatomic) NSMutableArray unfulfilledRequirementsArray;
@property (nonatomic) Q unfulfilledRequirementsArray_Count;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) NSMutableArray unfulfilledDetailsArray;
@property (nonatomic) Q unfulfilledDetailsArray_Count;
@property (nonatomic) NSInteger rawJoinStatus;
+ (id)descriptor;
@end
