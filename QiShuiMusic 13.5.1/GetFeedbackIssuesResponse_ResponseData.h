@interface GetFeedbackIssuesResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray issueCategoriesArray;
@property (nonatomic) Q issueCategoriesArray_Count;
@property (nonatomic) IssueCategory dislikeRivalIssueCategory;
@property (nonatomic) BOOL hasDislikeRivalIssueCategory;
@property (nonatomic) NSMutableArray issuesArray;
@property (nonatomic) Q issuesArray_Count;
+ (id)descriptor;
@end
