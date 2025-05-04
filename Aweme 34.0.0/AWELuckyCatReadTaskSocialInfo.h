@interface AWELuckyCatReadTaskSocialInfo : MTLModel
@property (nonatomic) AWELuckyCatReadTaskSociaFeedFollowTaskInfo feedFollowTask;
@property (nonatomic) AWELuckyCatReadTaskSocialCommentIncentiveTaskInfo commentIncentiveTask;
@property (nonatomic) BOOL isCommentInspireStrategyA;
@property (nonatomic) AWELuckyCatReadTaskSociaIMShareTaskInfo imShareTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedFollowTask;
- (void)setFeedFollowTask:;
- (id)commentIncentiveTask;
- (void)setCommentIncentiveTask:;
- (BOOL)isCommentInspireStrategyA;
- (void)setIsCommentInspireStrategyA:;
- (id)imShareTask;
- (void)setImShareTask:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
