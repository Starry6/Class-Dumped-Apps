@interface EKEventActionHandler : NSObject
- (void)removeInteractionsForCalendar:;
- (void)handleEventCreation:;
- (void)prepareForEventUpdate:;
- (id)_intentForAction:onEvent:;
- (id)createEventIntentForEvent:;
- (void)handleEventDeletion:;
- (void)handleEventUpdate:;
- (id)createEventIntentForEvent:withSuggestionsInfoUniqueKey:;
- (void)donatePredictiveAction:forEvent:;
- (void)donateInteractionForAction:onEvent:;
+ (id)_displayStringForDate:;
+ (id)sharedInstance;
+ (id)_logHandle;
@end
