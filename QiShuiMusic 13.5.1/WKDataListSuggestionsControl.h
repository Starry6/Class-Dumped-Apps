@interface WKDataListSuggestionsControl : NSObject
@property (nonatomic) WKContentView view;
@property (nonatomic) BOOL isShowingSuggestions;
- (long long)suggestionsCount;
- (id)textSuggestions;
- (id)view;
- (void).cxx_destruct;
- (long long)textAlignment;
- (void)setView:;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithInformation:inView:;
- (void)updateWithInformation:;
- (void)showSuggestionsDropdown:activationType:;
- (void)didSelectOptionAtIndex:;
- (id)suggestionAtIndex:;
- (BOOL)isShowingSuggestions;
- (void)setIsShowingSuggestions:;
@end
