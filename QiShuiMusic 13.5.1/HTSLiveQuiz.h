@interface HTSLiveQuiz : IESLivePBBaseMessage
@property (nonatomic) NSString quizId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString options;
@property (nonatomic) NSInteger quizStatus;
@property (nonatomic) q countdownTime;
@property (nonatomic) q winOption;
@property (nonatomic) q betOption;
@property (nonatomic) NSString gain;
@property (nonatomic) NSString templateId;
@property (nonatomic) q absoluteEndTime;
+ (id)descriptor;
@end
