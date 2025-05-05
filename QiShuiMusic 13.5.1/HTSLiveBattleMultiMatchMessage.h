@interface HTSLiveBattleMultiMatchMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger matchStatus;
@property (nonatomic) q expectTime;
@property (nonatomic) NSMutableArray previewUserListArray;
@property (nonatomic) Q previewUserListArray_Count;
@property (nonatomic) q defaultWaitLimit;
@property (nonatomic) q inviteLimitSec;
@property (nonatomic) q matchType;
+ (id)descriptor;
@end
