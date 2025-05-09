@interface EKPersistentLocation : EKPersistentObject
- (void)setReferenceFrame:;
- (void)setRadius:;
- (id)latitude;
- (void)setAddress:;
- (id)radius;
- (void)setTitle:;
- (id)referenceFrame;
- (void)setLatitude:;
- (id)title;
- (void)setRouting:;
- (void)setLongitude:;
- (int)entityType;
- (id)description;
- (id)address;
- (id)longitude;
- (void)setCalendarItemOwner:;
- (id)calendarItemOwner;
- (id)copyWithZone:;
- (id)mapKitHandle;
- (void)setMapKitHandle:;
- (id)contactLabel;
- (void)setContactLabel:;
- (id)routing;
- (id)derivedFrom;
- (void)setDerivedFrom:;
- (void)setAlarmOwner:;
- (id)alarmOwner;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
@end
