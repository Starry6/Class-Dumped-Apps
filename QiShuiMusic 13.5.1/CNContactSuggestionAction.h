@interface CNContactSuggestionAction : CNContactAction
- (void)performActionWithSender:;
- (BOOL)_confirmOrReject:;
- (BOOL)ignoreSuggestion;
- (BOOL)confirmSuggestion;
@end
