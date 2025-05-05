@interface CaliTIPHandler : NSObject
+ (void)processMessages:withDatabase:calStore:accountInfo:handledEventCallback:cancellationToken:;
+ (BOOL)diffsAreImportant:;
+ (id)debugStringForEvent:;
+ (id)getOccurrenceChange:forEvent:inCalendar:;
+ (BOOL)doScheduleChanges:applyToEvent:inCalendar:;
+ (BOOL)isAddressMe:withAccountInfo:;
+ (id)myAddressWithAccountInfo:forEvent:;
+ (BOOL)myStatusNeedsActionForEvent:withAccountInfo:;
+ (void)processMessage:withDatabase:calStore:accountInfo:handledEventCallback:;
+ (BOOL)handleEvent:calEvent:eventID:database:message:accountInfo:;
+ (id)_calculateDiffsForCalEvent:icsEvent:inMessage:;
@end
