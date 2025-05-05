@interface TRIFullMAAssetId : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSString specifier;
@property (nonatomic) NSString version;
- (id)init;
- (id)initWithType:specifier:version:;
- (id)version;
- (id)copyWithReplacementVersion:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)copyWithReplacementSpecifier:;
- (void)encodeWithCoder:;
- (id)type;
- (id)specifier;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithReplacementType:;
- (BOOL)isEqualToIdent:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)identWithType:specifier:version:;
@end
