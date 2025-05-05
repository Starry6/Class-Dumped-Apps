@interface HTSLiveToolBarData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray entranceListArray;
@property (nonatomic) Q entranceListArray_Count;
@property (nonatomic) NSMutableArray morePanelArray;
@property (nonatomic) Q morePanelArray_Count;
@property (nonatomic) NSInteger maxEntranceCnt;
@property (nonatomic) NSMutableArray landscapeUpRightArray;
@property (nonatomic) Q landscapeUpRightArray_Count;
@property (nonatomic) GPBInt32ObjectDictionary skinResource;
@property (nonatomic) Q skinResource_Count;
@property (nonatomic) NSInteger maxEntranceCntLandscape;
@property (nonatomic) ToolbarPermutation permutation;
@property (nonatomic) BOOL hasPermutation;
+ (id)descriptor;
@end
