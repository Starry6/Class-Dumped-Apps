@interface IESLiveSaaSPBSportsQuiz : GPBMessage
@property (nonatomic) q quizId;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger quizStatus;
@property (nonatomic) q totalReward;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) q winOption;
@property (nonatomic) q endTime;
@property (nonatomic) q betGoldBall;
@property (nonatomic) q selectedOption;
@property (nonatomic) q bonus;
+ (id)descriptor;
@end
