@interface IESLiveLinkMicAudiencePrepareApplyListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) IESLiveLinkMicAudiencePrepareApplyUser current;
@property (nonatomic) BOOL hasCurrent;
@property (nonatomic) HTSLiveText title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) q now;
+ (id)descriptor;
@end
