@interface FAInviteSuggestions : NSObject
@property (nonatomic) _PSPredictionContext context;
@property (nonatomic) NSArray suggestions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSuggestions:;
- (id)context;
- (id)suggestions;
- (void).cxx_destruct;
- (void)setContext:;
- (id)fetchFamilyMemberSuggestions;
- (long long)fetchSuggestedInviteTransportForContactId:contactHandles:;
@end
