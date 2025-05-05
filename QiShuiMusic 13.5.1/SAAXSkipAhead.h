@interface SAAXSkipAhead : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)skipAhead;
+ (id)skipAheadWithDictionary:context:;
@end
