@interface IESLiveSaaSPBGetFeedbackIssuesResponse_ResponseData : GPBMessage
@property (nonatomic) NSMutableArray issueCategoriesArray;
@property (nonatomic) Q issueCategoriesArray_Count;
@property (nonatomic) IESLiveSaaSPBIssueCategory dislikeRivalIssueCategory;
@property (nonatomic) BOOL hasDislikeRivalIssueCategory;
@property (nonatomic) NSMutableArray issuesArray;
@property (nonatomic) Q issuesArray_Count;
+ (id)descriptor;
@end
