@interface SASmsRecipientSearch : SADomainCommand
@property (nonatomic) BOOL clientShouldResolvePhonesAndEmails;
@property (nonatomic) NSArray recipients;
- (id)recipients;
- (id)groupIdentifier;
- (void)setRecipients:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (BOOL)clientShouldResolvePhonesAndEmails;
- (void)setClientShouldResolvePhonesAndEmails:;
+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:context:;
@end
