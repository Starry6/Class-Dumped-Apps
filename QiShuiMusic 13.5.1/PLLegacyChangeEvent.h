@interface PLLegacyChangeEvent : NSObject
+ (id)localChangeEventFromChangeHubEvent:withLibraryBundle:;
+ (id)_descriptionForEvent:;
+ (BOOL)isEmptyEvent:;
+ (id)_descriptionForEvent:withPersistentStoreCoordinator:;
@end
