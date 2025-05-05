@interface IESLiveSaaSPBSportsQuizMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString matchId;
@property (nonatomic) NSInteger quizMsgType;
@property (nonatomic) NSMutableArray quizArray;
@property (nonatomic) Q quizArray_Count;
+ (id)descriptor;
@end
