@interface AnswerHighlightResponse : IESLivePBBaseMessage
@property (nonatomic) AnswerHighlightResponse_Response data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
