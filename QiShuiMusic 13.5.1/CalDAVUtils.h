@interface CalDAVUtils : NSObject
+ (id)dropBoxLocationForUID:dropBoxPath:;
+ (id)stringFromUIDWithPathSafeCharacters:;
+ (id)headersFromHeaders:replacingPreconditionsWithScheduleTag:;
@end
