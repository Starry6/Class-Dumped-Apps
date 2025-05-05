@interface SFSuggestionEngagementFeedback : SFFeedback
@property (nonatomic) SFSearchSuggestion suggestion;
- (id)suggestion;
- (void)setSuggestion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSuggestion:;
+ (BOOL)supportsSecureCoding;
@end
