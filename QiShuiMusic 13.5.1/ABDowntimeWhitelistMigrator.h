@interface ABDowntimeWhitelistMigrator : NSObject
+ (BOOL)moveDowntimeWhitelistFromUnknownProperties:;
+ (id)unknownPropertiesFromExternalRepresentation:;
+ (id)externalRepresentationFromUnknownProperties:;
@end
