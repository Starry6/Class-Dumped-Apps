@interface AAFKeychainItemDescriptor : NSObject
@property (nonatomic) Q itemClass;
@property (nonatomic) Q itemAccessible;
@property (nonatomic) NSString account;
@property (nonatomic) NSString service;
@property (nonatomic) NSString server;
@property (nonatomic) NSString securityDomain;
@property (nonatomic) NSString label;
@property (nonatomic) NSString accessGroup;
@property (nonatomic) Q invisible;
@property (nonatomic) Q synchronizable;
@property (nonatomic) Q useDataProtection;
- (id)account;
- (id)accessGroup;
- (void)setService:;
- (void)setAccount:;
- (void)setAccessGroup:;
- (id)server;
- (void)setServer:;
- (void)setLabel:;
- (id)label;
- (id)initWithAttributes:;
- (id)service;
- (id)attributes;
- (void)setSynchronizable:;
- (void).cxx_destruct;
- (unsigned long long)synchronizable;
- (id)copyWithZone:;
- (unsigned long long)invisible;
- (void)setInvisible:;
- (unsigned long long)itemClass;
- (void)setItemClass:;
- (id)securityDomain;
- (id)_keychainClassWithClass:;
- (unsigned long long)_classWithKeychainClass:;
- (id)_keychainAccessibleWithAccessible:;
- (unsigned long long)_accessibleWithKeychainAccessible:;
- (unsigned long long)_optionalValueFromObject:;
- (id)_objectForOptionalBool:;
- (unsigned long long)itemAccessible;
- (void)setItemAccessible:;
- (void)setSecurityDomain:;
- (unsigned long long)useDataProtection;
- (void)setUseDataProtection:;
@end
