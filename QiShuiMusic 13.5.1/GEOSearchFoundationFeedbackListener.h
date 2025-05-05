@interface GEOSearchFoundationFeedbackListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)traits;
- (id)init;
- (void)resultsDidBecomeVisible:;
- (void)didPerformCommand:;
- (void)didEngageCardSection:;
- (void)didEngageSection:;
- (void)didRankSections:;
- (id)initWithClientType:;
- (void)cardViewDidAppear:;
- (void)didEngageResult:;
- (void).cxx_destruct;
+ (id)_identifiersFromCardSections:;
+ (id)feedbackListenerForParsec;
+ (id)_mapsResultIdentifiersFromSections:;
@end
