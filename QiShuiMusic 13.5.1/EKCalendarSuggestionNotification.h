@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification
@property (nonatomic) NSString originAppName;
@property (nonatomic) SGEvent suggestedEvent;
- (void).cxx_destruct;
- (Class)_SGSuggestionsServiceClass;
- (id)originAppName;
- (void)updateSuggestedEventWithEventStore:;
- (id)suggestedEvent;
+ (id)_queue;
@end
