@interface AWEFeedRVSingleListSlideUpGuideManager : NSObject
@property (nonatomic) AWEFeedRVSingleListSlideUpGuideButton guideButton;
@property (nonatomic) <AWEFeedRVSingleListSlideUpGuideManagerDelegate> delegate;
@property (nonatomic) AWEFeedRVSingleListSlideUpGuideTextView guideTextView;
- (double)textViewHeight;
- (BOOL)shouldShowGuideTextView;
- (id)guideTextView;
- (void)trackRecommendGuideShow;
- (id)dateStrForDate:;
- (void)updateGuideTextViewIfNeeded:;
- (void)resetButtonTitle:;
- (void)setGuideTextView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setGuideButton:;
- (id)guideButton;
@end
