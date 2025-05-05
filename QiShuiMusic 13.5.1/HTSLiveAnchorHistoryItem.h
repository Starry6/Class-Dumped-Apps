@interface HTSLiveAnchorHistoryItem : IESLivePBBaseMessage
@property (nonatomic) NSString quizId;
@property (nonatomic) NSString quizTitle;
@property (nonatomic) NSString options;
@property (nonatomic) NSInteger quizStatus;
@property (nonatomic) q countdownTime;
@property (nonatomic) q winOption;
@property (nonatomic) NSString templateId;
@property (nonatomic) NSString failReason;
@property (nonatomic) q createTime;
@property (nonatomic) q settleAgain;
@property (nonatomic) q absoluteEndTime;
+ (id)descriptor;
@end
