@interface CXAccount : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSString accountDescription;
@property (nonatomic) NSString shortLabel;
@property (nonatomic) CXHandle handle;
@property (nonatomic) NSString isoCountryCode;
@property (nonatomic) NSString serviceName;
- (id)shortLabel;
- (id)init;
- (id)handle;
- (id)serviceName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)isoCountryCode;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (void).cxx_destruct;
- (id)accountDescription;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (BOOL)isEqualToAccount:;
- (id)copyWithZone:;
- (id)initWithUUID:description:serviceName:isoCountryCode:handle:;
- (id)initWithUUID:description:serviceName:isoCountryCode:handle:shortLabel:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
