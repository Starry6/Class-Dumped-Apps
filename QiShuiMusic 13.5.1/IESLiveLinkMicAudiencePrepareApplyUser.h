@interface IESLiveLinkMicAudiencePrepareApplyUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q applyTime;
@property (nonatomic) q offset;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) IESLiveListUserEventInfo eventInfo;
@property (nonatomic) BOOL hasEventInfo;
+ (id)descriptor;
@end
