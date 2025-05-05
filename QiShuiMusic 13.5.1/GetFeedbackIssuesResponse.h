@interface GetFeedbackIssuesResponse : IESLivePBBaseMessage
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) GetFeedbackIssuesResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
- (id)issueCategories;
- (id)issueCategories;
- (id)pkDislikeRivalIssueCategory;
- (id)pkDislikeRivalIssueCategory;
- (id)issues;
- (id)issues;
+ (id)descriptor;
@end
