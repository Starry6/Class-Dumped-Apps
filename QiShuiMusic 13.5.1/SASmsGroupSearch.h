@interface SASmsGroupSearch : SADomainCommand
@property (nonatomic) NSString smsGroupName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)smsGroupName;
- (void)setSmsGroupName:;
+ (id)groupSearch;
+ (id)groupSearchWithDictionary:context:;
@end
