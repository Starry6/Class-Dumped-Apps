@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSData imageData;
- (void)encodeWithXPCDictionary:;
- (id)contactIdentifier;
- (id)imageData;
- (id)firstName;
- (id)lastName;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithContactIdentifier:;
- (id)initWithFirstName:lastName:;
- (id)_initForSubclass;
- (id)initWithFirstName:lastName:imageData:;
@end
