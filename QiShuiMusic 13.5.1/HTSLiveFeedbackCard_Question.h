@interface HTSLiveFeedbackCard_Question : IESLivePBBaseMessage
@property (nonatomic) NSString questionKey;
@property (nonatomic) NSString questionText;
@property (nonatomic) q type;
@property (nonatomic) NSMutableArray optionsArray;
@property (nonatomic) Q optionsArray_Count;
@property (nonatomic) q questionId;
@property (nonatomic) NSMutableArray roomCardsArray;
@property (nonatomic) Q roomCardsArray_Count;
+ (id)descriptor;
@end
