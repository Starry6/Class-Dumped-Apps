@interface SAARAlternativeResultsView : SAAceView
@property (nonatomic) NSString dialogIdentifier;
@property (nonatomic) q rank;
@property (nonatomic) SAUIAddViews resultView;
@property (nonatomic) BOOL suggestedResult;
@property (nonatomic) NSString utterance;
- (void)af_addEntriesToAnalyticsContext:;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)groupIdentifier;
- (long long)rank;
- (id)encodedClassName;
- (void)setRank:;
- (id)utterance;
- (void)setUtterance:;
- (void)setDialogIdentifier:;
- (id)dialogIdentifier;
- (id)resultView;
- (void)setResultView:;
- (BOOL)suggestedResult;
- (void)setSuggestedResult:;
+ (id)alternativeResultsView;
+ (id)alternativeResultsViewWithDictionary:context:;
@end
