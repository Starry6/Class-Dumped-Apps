@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem
- (id)weatherDisplayName;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (id)addressDictionary;
- (id)eventDate;
- (id)_place;
- (id)addressObject;
- (id)geoAddress;
- (BOOL)isEventAllDay;
- (id)_clientAttributes;
- (id)eventName;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (id)name;
- (id)initWithAddressDictionary:eventName:eventTitle:eventDate:eventIsAllDay:coordinate:clientAttributes:;
@end
