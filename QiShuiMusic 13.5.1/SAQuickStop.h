@interface SAQuickStop : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)quickStop;
+ (id)quickStopWithDictionary:context:;
@end
