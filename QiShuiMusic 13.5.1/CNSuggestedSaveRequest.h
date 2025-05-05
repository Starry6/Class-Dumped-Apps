@interface CNSuggestedSaveRequest : CNSaveRequest
@property (nonatomic) NSMutableSet mutableConfirmedSuggestions;
@property (nonatomic) NSMutableSet mutableRejectedSuggestions;
@property (nonatomic) NSSet confirmedSuggestions;
@property (nonatomic) NSSet rejectedSuggestions;
- (id)storeIdentifier;
- (id)mutableConfirmedSuggestions;
- (id)mutableRejectedSuggestions;
- (void)confirmSuggestion:;
- (void)setMutableConfirmedSuggestions:;
- (void)setMutableRejectedSuggestions:;
- (void).cxx_destruct;
- (void)rejectSuggestion:;
- (id)rejectedSuggestions;
- (id)confirmedSuggestions;
@end
