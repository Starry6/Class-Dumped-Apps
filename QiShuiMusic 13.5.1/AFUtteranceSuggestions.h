@interface AFUtteranceSuggestions : NSObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) <AFUtteranceSuggestionsDelegate> delegate;
- (id)languageCode;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithLanguageCode:delegate:;
- (id)_suggestionsFilePath;
- (void)getSuggestedUtterancesWithCompletion:;
- (void)setSuggestedUtterances:;
@end
