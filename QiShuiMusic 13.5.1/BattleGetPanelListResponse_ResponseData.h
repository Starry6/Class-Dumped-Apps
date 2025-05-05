@interface BattleGetPanelListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray mixCanNotPassAnchorIdsArray;
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
@property (nonatomic) BOOL selfDataSwitch;
@property (nonatomic) NSInteger anchorPkCheck;
@property (nonatomic) NSMutableArray canNotPassAnchorIdsArray;
@property (nonatomic) Q canNotPassAnchorIdsArray_Count;
@property (nonatomic) BOOL useServerPanelList;
@property (nonatomic) BattleGetPanelListResponse_AutoMatchInfo matchInfo;
@property (nonatomic) BOOL hasMatchInfo;
@property (nonatomic) NSMutableArray tabListArray;
@property (nonatomic) Q tabListArray_Count;
@property (nonatomic) NSInteger selectTabType;
@property (nonatomic) NSString customEntranceTag;
@property (nonatomic) BOOL showAuxiliaryTab;
@property (nonatomic) q curAuxiliaryType;
- (id)mixCanNotPassAnchorIdsArray;
+ (id)descriptor;
@end
