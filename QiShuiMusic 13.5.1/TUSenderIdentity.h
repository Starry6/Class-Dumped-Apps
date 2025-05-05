@interface TUSenderIdentity : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSUUID accountUUID;
@property (nonatomic) TUHandle handle;
@property (nonatomic) NSString ISOCountryCode;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedShortName;
@property (nonatomic) NSString localizedServiceName;
- (id)localizedShortName;
- (id)handle;
- (id)localizedName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)ISOCountryCode;
- (id)accountUUID;
- (id)initWithUUID:accountUUID:localizedName:localizedShortName:localizedServiceName:handle:;
- (id)localizedServiceName;
- (id)initWithUUID:accountUUID:localizedName:localizedShortName:handle:;
- (id)initWithUUID:accountUUID:ISOCountryCode:localizedName:localizedShortName:localizedServiceName:handle:;
- (id)initWithSenderIdentity:;
- (BOOL)isEqualToSenderIdentity:;
+ (BOOL)supportsSecureCoding;
@end
