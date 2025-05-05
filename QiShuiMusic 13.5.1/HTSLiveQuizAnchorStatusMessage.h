@interface HTSLiveQuizAnchorStatusMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
+ (id)descriptor;
@end
