@interface AnswerHighlightResponse_Response : IESLivePBBaseMessage
@property (nonatomic) q eventTime;
@property (nonatomic) HTSLiveHighlightItem item;
@property (nonatomic) BOOL hasItem;
@property (nonatomic) q skipReview;
+ (id)descriptor;
@end
