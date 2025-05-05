@interface SADeviceSetDeviceToSleep : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setDeviceToSleep;
+ (id)setDeviceToSleepWithDictionary:context:;
@end
