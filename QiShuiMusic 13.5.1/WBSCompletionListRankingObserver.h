@interface WBSCompletionListRankingObserver : NSObject
@property (nonatomic) <WBSCompletionListRankingObserverDelegate> delegate;
@property (nonatomic) SFRankingFeedback rankingFeedback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_createFeedbackGenerator;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)rankingFeedback;
- (void)didBeginRanking;
- (void)didEndRanking;
- (void)didBeginSectionWithBundleIdentifier:;
- (unsigned long long)completionListRankingObserverFeedbackGenerator:frequentlyVisitedSitesIndexOfItem:hidingItem:;
- (void)didAddItem:;
- (void)didAddItem:hidingOutrankedResults:hidingDuplicateResults:;
- (void)removeAllSectionsAndItems;
- (Class)_feedbackGeneratorClass;
@end
