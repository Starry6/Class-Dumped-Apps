@interface STDynamicActivityAttribution : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString localizationKey;
@property (nonatomic) NSString formattedString;
@property (nonatomic) NSString website;
@property (nonatomic) {?=[8I]} clientAuditToken;
@property (nonatomic) NSString clientExecutablePath;
@property (nonatomic) {?=[8I]} maskingClientAuditToken;
@property (nonatomic) NSString maskingClientExecutablePath;
- (id)localizationKey;
- (id)bundleIdentifier;
- (id)clientExecutablePath;
- (id)website;
- (id)maskingClientExecutablePath;
- (id)initWithCoder:;
- (id)clientAuditToken;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)formattedString;
- (id)description;
- (id)maskingClientAuditToken;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)attributionForClientAuditToken:clientExecutablePath:bundleID:localizationKey:;
+ (id)attributionForClientAuditToken:maskingClientAuditToken:clientExecutablePath:maskingClientExecutablePath:localizationKey:;
+ (id)attributionForClientAuditToken:maskingClientAuditToken:clientExecutablePath:maskingClientExecutablePath:stringWithFormat:;
+ (id)attributionForClientAuditToken:maskingClientAuditToken:clientExecutablePath:maskingClientExecutablePath:website:;
@end
