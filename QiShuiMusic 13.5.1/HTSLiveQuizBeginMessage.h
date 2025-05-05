@interface HTSLiveQuizBeginMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q quizId;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray quizInfosArray;
@property (nonatomic) Q quizInfosArray_Count;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
