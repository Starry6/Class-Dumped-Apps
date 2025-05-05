@interface HTSLiveSyncStreamMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray infoListArray;
@property (nonatomic) Q infoListArray_Count;
+ (id)descriptor;
@end
