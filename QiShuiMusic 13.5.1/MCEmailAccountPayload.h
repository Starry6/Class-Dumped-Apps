@interface MCEmailAccountPayload : MCEmailAccountPayloadBase
@property (nonatomic) NSNumber incomingMailServerUseSSLNum;
@property (nonatomic) NSNumber outgoingPasswordSameAsIncomingPasswordNum;
@property (nonatomic) NSNumber outgoingMailServerUseSSLNum;
@property (nonatomic) NSString emailAccountDescription;
@property (nonatomic) NSString emailAccountName;
@property (nonatomic) NSString emailAccountType;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString incomingMailServerAuthentication;
@property (nonatomic) NSString incomingMailServerHostname;
@property (nonatomic) NSNumber incomingMailServerPortNumber;
@property (nonatomic) BOOL incomingMailServerUseSSL;
@property (nonatomic) NSString incomingMailServerUsername;
@property (nonatomic) NSString incomingMailServerIMAPPathPrefix;
@property (nonatomic) NSString incomingPassword;
@property (nonatomic) NSString incomingACAccountIdentifier;
@property (nonatomic) NSString outgoingPassword;
@property (nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;
@property (nonatomic) NSString outgoingMailServerAuthentication;
@property (nonatomic) NSString outgoingMailServerHostname;
@property (nonatomic) NSNumber outgoingMailServerPortNumber;
@property (nonatomic) BOOL outgoingMailServerUseSSL;
@property (nonatomic) NSString outgoingMailServerUsername;
@property (nonatomic) NSString outgoingACAccountIdentifier;
- (id)emailAddress;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)mailAccountIdentifiers;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (BOOL)containsSensitiveUserInformation;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)_emailAccountTypeLocalizedString;
- (id)_authenticationTypeLocalizedString:;
- (id)emailAccountDescription;
- (id)emailAccountName;
- (id)emailAccountType;
- (id)incomingMailServerAuthentication;
- (id)incomingMailServerHostname;
- (id)incomingMailServerPortNumber;
- (BOOL)incomingMailServerUseSSL;
- (id)incomingMailServerUsername;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingPassword;
- (id)incomingACAccountIdentifier;
- (void)setIncomingACAccountIdentifier:;
- (id)outgoingPassword;
- (BOOL)outgoingPasswordSameAsIncomingPassword;
- (id)outgoingMailServerAuthentication;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerPortNumber;
- (BOOL)outgoingMailServerUseSSL;
- (id)outgoingMailServerUsername;
- (id)outgoingACAccountIdentifier;
- (void)setOutgoingACAccountIdentifier:;
- (id)incomingMailServerUseSSLNum;
- (id)outgoingPasswordSameAsIncomingPasswordNum;
- (id)outgoingMailServerUseSSLNum;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)profileNameFromAccountTag:;
+ (id)localizedSingularForm;
@end
