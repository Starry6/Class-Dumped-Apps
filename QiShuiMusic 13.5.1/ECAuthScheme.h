@interface ECAuthScheme : NSObject
@property (nonatomic) NSSet supportedSASLMechanisms;
@property (nonatomic) BOOL requiresUsername;
@property (nonatomic) BOOL requiresPassword;
@property (nonatomic) NSString name;
@property (nonatomic) NSString humanReadableName;
@property (nonatomic) I applescriptScheme;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
+ (id)allocWithZone:;
+ (id)schemeWithName:;
+ (id)knownSchemes;
+ (id)schemeWithApplescriptScheme:;
@end
