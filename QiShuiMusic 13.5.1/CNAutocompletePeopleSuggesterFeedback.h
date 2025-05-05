@interface CNAutocompletePeopleSuggesterFeedback : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) _PSSuggester psSuggester;
- (id)init;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)psSuggester;
+ (id)bundleIdentifier;
+ (id)sharedInstance;
+ (void)provideFeedback:;
+ (void)userEnteredContact:;
+ (void)userEnteredExistingSession;
+ (void)userEnteredNewSession;
+ (void)userNavigatedAwayFromSession;
+ (void)userRemovedContact:;
+ (void)userSelectedFromContactPicker:;
+ (void)userSelectedSuggestion:;
+ (void)userTerminatedSession;
+ (void)didReceiveSuggestions:;
@end
