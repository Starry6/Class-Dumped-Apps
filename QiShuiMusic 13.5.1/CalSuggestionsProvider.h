@interface CalSuggestionsProvider : NSObject
@property (nonatomic) BOOL suggestionsFrameworkAvailable;
@property (nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> service;
- (void)setService:;
- (id)init;
- (id)service;
- (void).cxx_destruct;
- (void)_loadSuggestionsFramework;
- (id)sgEventFromUniqueID:error:;
- (void)confirmEventWithSuggestionID:;
- (id)senderForEventWithSuggestionID:;
- (id)sgRecordIDForEventWithSuggestionID:error:;
- (id)fakeSGRecordID;
- (void)confirmSGEventWithRecordID:;
- (void)rejectSGEventWithRecordID:;
- (BOOL)eventsFoundInMailEnabled;
- (BOOL)suggestionsFrameworkAvailable;
- (void)setSuggestionsFrameworkAvailable:;
+ (id)defaultProvider;
@end
