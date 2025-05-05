@interface CalDAVPrincipalSearchSupport : NSObject
+ (id)nameForWellKnownType:;
+ (id)namespaceForWellKnownType:;
+ (id)namespaceAndNameForWellKnownType:;
+ (id)propertySearchItemForWellKnownType:;
+ (id)resultTypeForRecordType:;
+ (id)parserMappingsWithServerSupportSet:includeEmail:;
@end
