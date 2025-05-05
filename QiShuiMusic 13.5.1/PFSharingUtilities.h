@interface PFSharingUtilities : NSObject
+ (id)_exifDateTimeFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_dateFormatterTemplate;
+ (id)_gpsTimeFormatter;
+ (id)_gpsDateFormatter;
+ (id)addAccessibilityDescription:toAVMetadata:;
+ (id)addDescription:toAVMetadata:;
+ (id)setString:forKey:inKeySpace:inAVMetadata:;
+ (id)addCustomDate:toAVMetadata:;
+ (id)addCustomLocation:toAVMetadata:;
+ (id)gpsDictionaryForLocation:;
+ (id)exifDateTimeFromDate:;
+ (id)exifSubsecTimeFromDate:;
+ (id)addCreationDate:toExifDictionary:;
+ (id)addCreationDate:toTIFFDictionary:;
@end
