@interface HTSLiveFeedbackCard_Option : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) q subQuestionId;
@property (nonatomic) BOOL negative;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSInteger tendency;
+ (id)descriptor;
@end
