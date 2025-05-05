@interface SARadarFilingDidBegin : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)filingDidBegin;
+ (id)filingDidBeginWithDictionary:context:;
@end
