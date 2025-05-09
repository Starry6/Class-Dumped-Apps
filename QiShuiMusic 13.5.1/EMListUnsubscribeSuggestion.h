@interface EMListUnsubscribeSuggestion : NSObject
@property (nonatomic) EMListUnsubscribeCommand listUnsubscribeCommand;
@property (nonatomic) SGSuggestionPresenter suggestionPresenter;
@property (nonatomic) <SGSuggestion> suggestion;
@property (nonatomic) NSString unsubscribeMessageAlertString;
@property (nonatomic) <SGSuggestionDelegate> suggestionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)suggestion;
- (void)setSuggestionDelegate:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)suggestionDelegate;
- (void)unsubscribe;
- (BOOL)isEqual:;
- (void)ignore;
- (id)suggestionTitle;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:;
- (id)suggestionCategorySubtitleForItems:;
- (id)suggestionCategoryLocalizedCountOfItems:;
- (id)suggestionComparator;
- (id)suggestionCategory;
- (id)suggestionPrimaryAction;
- (id)suggestionDismissAction;
- (id)unsubscribeMessageAlertString;
- (void)_sendAnalyticsForUnsubscribe:;
- (id)listUnsubscribeCommand;
- (void)setListUnsubscribeCommand:;
- (id)suggestionPresenter;
- (void)setSuggestionPresenter:;
+ (id)suggestionPrimaryActionString;
+ (id)suggestionDismissActionTitle;
+ (id)unsubscribeTitleAlertString;
@end
