@interface AWEFeedNegativeFeedbackFilterService : NSObject
@property (nonatomic) AWEFeedNegativeFeedbackFilterManager filterManager;
@property (nonatomic) AWEFeedNegativeFeedbackFilterRuleManager ruleManager;
- (void)negativeFeedbackWithVideo:feedbackType:;
- (id)filterManager;
- (void)setFilterManager:;
- (void)negativeFeedbackWithAuthor:feedbackType:;
- (void)revertNegativeFeedbackWithAuthorModel:feedbackType:;
- (BOOL)shouldVideoBeFilteredWithModel:;
- (id)filterVideosWithAwemeList:;
- (void)revertNegativeFeedbackWithVideoModel:feedbackType:;
- (id)negativeFeedbackInfoDict;
- (id)ruleManager;
- (void)negativeFeedbackWithMusic:feedbackType:;
- (void)negativeFeedbackWithTextExtra:feedbackType:;
- (void)negativeFeedbackWithVideoTypeTags:feedbackType:;
- (void)revertNegativeFeedbackWithMusicModel:feedbackType:;
- (void)revertNegativeFeedbackWithTextExtraModel:feedbackType:;
- (void)revertNegativeFeedbackWithVideoTypeTagsArray:feedbackType:;
- (void)setRuleManager:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
