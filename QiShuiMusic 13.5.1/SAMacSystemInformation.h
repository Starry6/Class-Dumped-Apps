@interface SAMacSystemInformation : SADomainObject
@property (nonatomic) NSString query;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (id)encodedClassName;
+ (id)systemInformation;
+ (id)systemInformationWithDictionary:context:;
@end
