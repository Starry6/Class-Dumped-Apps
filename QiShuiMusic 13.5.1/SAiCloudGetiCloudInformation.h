@interface SAiCloudGetiCloudInformation : SADomainCommand
@property (nonatomic) NSString query;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getiCloudInformation;
+ (id)getiCloudInformationWithDictionary:context:;
@end
