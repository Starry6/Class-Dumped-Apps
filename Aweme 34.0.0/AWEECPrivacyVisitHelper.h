@interface AWEECPrivacyVisitHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)openURL:options:visitType:context:completion:;
+ (void)openSystemAppSettingsWithContext:completion:;
+ (void)getPasteboardStringForType:withContext:completion:;
+ (id)certForIESECPasteboardVisit:;
+ (void)updatePasteboardString:cert:completion:;
+ (id)certForAWEECPasteboardVisit:;
+ (void)getPasteboardStringWithCert:completion:;
+ (id)certForIESECOpenURLVisit:;
+ (id)certForAWEECVideoAudioVisit:;
+ (id)certForAWEECCalendarVisit:;
+ (void)updatePasteboardString:visitType:context:completion:;
+ (void)requestVideoAudioAuth:completion:;
+ (long long)authorizationStatusForEntityType:forType:;
+ (void)requestAccessToEntityType:eventStore:forType:completion:;
+ (id)calendarsForEntityType:eventStore:forType:;
+ (id)predicateForEventsWithStartDate:endDate:calendars:eventStore:forType:;
+ (id)eventsMatchingPredicate:eventStore:forType:;
+ (BOOL)saveEvent:span:eventStore:forType:error:;
+ (BOOL)removeEvent:span:eventStore:forType:error:;
@end
