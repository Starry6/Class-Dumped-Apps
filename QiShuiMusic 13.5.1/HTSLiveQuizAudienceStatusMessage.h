@interface HTSLiveQuizAudienceStatusMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray quizListArray;
@property (nonatomic) Q quizListArray_Count;
+ (id)descriptor;
@end
