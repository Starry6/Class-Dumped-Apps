@interface EKAvailabilityUtilities : NSObject
+ (int)CALFreeBusyTypeFromEKAvailType:;
+ (int)leastAvailabileFreeBusyTypeForArray:;
+ (id)getCALFreeBusyFromEKSpans:inRange:;
+ (id)getCALFreeBusyFromResults:forAttendees:inRange:;
+ (long long)summarizedAvailabilityTypeForSpans:;
+ (BOOL)spansIncludeBusyPeriod:;
+ (BOOL)showTypeAsBusy:;
+ (BOOL)showTypeAsUnavailable:;
+ (long long)orderForType:;
@end
