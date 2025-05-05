@interface HTSLiveLinkerChangeMediaInfoContent : IESLivePBBaseMessage
@property (nonatomic) GPBEnumArray sceneListArray;
@property (nonatomic) Q sceneListArray_Count;
@property (nonatomic) GPBEnumArray playModeListArray;
@property (nonatomic) Q playModeListArray_Count;
@property (nonatomic) IESLiveLinkmicMediaParam linkmicMediaParam;
@property (nonatomic) BOOL hasLinkmicMediaParam;
+ (id)descriptor;
@end
