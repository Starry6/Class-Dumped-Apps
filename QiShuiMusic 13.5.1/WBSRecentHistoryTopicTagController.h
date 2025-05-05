@interface WBSRecentHistoryTopicTagController : NSObject
@property (nonatomic) Q maximumNumberOfTopics;
@property (nonatomic) double timeIntervalBeforeNowForFetchingTags;
- (id)initWithHistory:;
- (void).cxx_destruct;
- (void)loadTopicsWithCompletionHandler:;
- (unsigned long long)maximumNumberOfTopics;
- (void)setMaximumNumberOfTopics:;
- (double)timeIntervalBeforeNowForFetchingTags;
- (void)setTimeIntervalBeforeNowForFetchingTags:;
@end
