@interface BRAccountDescriptor : NSObject
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) BOOL isDataSeparated;
@property (nonatomic) NSString organizationName;
- (id)accountIdentifier;
- (id)personaIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)organizationName;
- (BOOL)isDataSeparated;
- (id)initWithPersonaIdentifier:accountIdentifier:organizationName:dataSeparated:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)mightHaveDataSeparatedAccountDescriptor;
+ (id)allLoggedInAccountDescriptors;
+ (id)accountDescriptorForURL:;
+ (id)accountDescriptorForPersonaID:;
+ (void)clearAccountDescriptorCache;
@end
