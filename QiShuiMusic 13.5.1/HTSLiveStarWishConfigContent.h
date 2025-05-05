@interface HTSLiveStarWishConfigContent : IESLivePBBaseMessage
@property (nonatomic) q defaultTargetScore;
@property (nonatomic) GPBInt64Array targetScoreListArray;
@property (nonatomic) Q targetScoreListArray_Count;
@property (nonatomic) BOOL disableTargetScoreList;
@property (nonatomic) BOOL anchorInvolved;
@property (nonatomic) BOOL disableAnchorInvolved;
@property (nonatomic) BOOL onceOpened;
+ (id)descriptor;
@end
