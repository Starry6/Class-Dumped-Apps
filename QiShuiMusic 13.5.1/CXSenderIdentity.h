@interface CXSenderIdentity : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) CXAccount account;
@property (nonatomic) CXHandle handle;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedShortName;
- (id)account;
- (id)localizedShortName;
- (id)handle;
- (id)localizedName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToSenderIdentity:;
- (id)initWithUUID:handle:localizedName:;
- (id)initWithUUID:account:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
