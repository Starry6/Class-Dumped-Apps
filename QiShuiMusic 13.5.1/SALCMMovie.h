@interface SALCMMovie : SALCMContent
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)movie;
+ (id)movieWithDictionary:context:;
@end
