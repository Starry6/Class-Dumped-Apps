@interface IESLiveLinkMicAudienceListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userArray;
@property (nonatomic) Q userArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL ktvShowSingerIcon;
@property (nonatomic) NSInteger sortStrategy;
@property (nonatomic) q now;
@property (nonatomic) BOOL showPaidLinkmicGuide;
@property (nonatomic) BOOL hasPrepareApply;
@property (nonatomic) NSMutableArray friendsArray;
@property (nonatomic) Q friendsArray_Count;
+ (id)descriptor;
@end
