@interface ECAuthenticationScheme : NSObject
@property (nonatomic) BOOL hasEncryption;
@property (nonatomic) BOOL requiresPassword;
@property (nonatomic) NSString name;
@property (nonatomic) NSString humanReadableName;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (Class)connectionClassForAccountClass:;
- (BOOL)canAuthenticateAccountClass:connection:;
- (Class)authenticatorClass;
- (BOOL)hasEncryption;
- (id)authenticatorForAccount:connection:;
+ (id)schemeWithName:;
+ (void)registerSchemeClass:;
+ (id)authenticationSchemesForAccount:connection:;
+ (id)knownSchemes;
@end
