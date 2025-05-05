@interface IESLiveLinkMicAudienceWaitingListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) BOOL hasWaitingUser;
@property (nonatomic) NSInteger sortStrategy;
@property (nonatomic) q now;
@property (nonatomic) q addPriceAudienceNum;
@property (nonatomic) BOOL hasPrepareApply;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL showPaidListTab;
@property (nonatomic) q paidListTotalCount;
@property (nonatomic) BOOL openPaidQueue;
@property (nonatomic) BOOL showPaidLinkmicGuide;
@property (nonatomic) q normalListTotalCount;
+ (id)descriptor;
@end
