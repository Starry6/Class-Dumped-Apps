@interface LNSuggestionsProvider : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)suggestedActionsForSuggestionsRequests:error:;
@end
