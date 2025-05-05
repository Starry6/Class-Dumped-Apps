@interface UITextAutofillSuggestion : UITextSuggestion
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
- (id)username;
- (id)password;
- (void).cxx_destruct;
- (id)initWithUsername:password:;
- (id)_keyboardCandidate;
+ (id)autofillSuggestionWithUsername:password:;
@end
