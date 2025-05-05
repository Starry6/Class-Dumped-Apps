@interface SAEmailSend : SADomainCommand
@property (nonatomic) SAEmailEmail email;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setEmail:;
- (id)encodedClassName;
- (id)email;
+ (id)send;
+ (id)sendWithDictionary:context:;
@end
