@interface HTSLiveQuizBetMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q quizId;
@property (nonatomic) GPBInt64Int64Dictionary optionMoney;
@property (nonatomic) Q optionMoney_Count;
+ (id)descriptor;
@end
