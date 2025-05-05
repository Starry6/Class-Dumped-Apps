@interface EKTTLEventTracker : NSObject
+ (void)trackEmailEngagedForTTLAlertWithTransportType:etaType:hasSuggestedLocation:isOnSharedCalendar:;
+ (void)trackEventFiredTTLAlertWithAlertType:transportType:etaType:travelState:hasSuggestedLocation:isOnSharedCalendar:;
+ (void)trackDirectionsEngagedForTTLAlertWithTransportType:etaType:hasSuggestedLocation:isOnSharedCalendar:;
+ (void)trackTTLCandidateEventHasSuggestedLocation:isOnSharedCalendar:;
+ (id)_valueForAlertType:;
+ (id)_valueForTransportType:;
+ (id)_valueForETAType:;
+ (id)_valueForTravelState:;
@end
