@interface VSAccountApplicationProvider : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString localizedDisplayName;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setDisplayName:;
- (id)displayName;
- (void)encodeWithCoder:;
- (id)localizedDisplayName;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLocalizedDisplayName:identifier:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
