@interface SASetActivationToken : SABaseClientBoundCommand
@property (nonatomic) NSData activationToken;
@property (nonatomic) NSString language;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)activationToken;
- (void)setActivationToken:;
+ (id)setActivationToken;
+ (id)setActivationTokenWithDictionary:context:;
@end
