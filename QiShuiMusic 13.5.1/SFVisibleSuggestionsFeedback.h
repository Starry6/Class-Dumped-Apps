@interface SFVisibleSuggestionsFeedback : SFFeedback
@property (nonatomic) NSArray suggestions;
- (void)setSuggestions:;
- (id)suggestions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSuggestions:;
+ (BOOL)supportsSecureCoding;
@end
