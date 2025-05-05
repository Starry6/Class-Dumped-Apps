@interface SACalendarDefaultSourceGet : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)defaultSourceGet;
+ (id)defaultSourceGetWithDictionary:context:;
@end
