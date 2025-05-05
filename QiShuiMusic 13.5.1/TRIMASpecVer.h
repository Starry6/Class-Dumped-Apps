@interface TRIMASpecVer : NSObject
@property (nonatomic) NSString specifier;
@property (nonatomic) NSString version;
- (id)init;
- (id)version;
- (id)copyWithReplacementVersion:;
- (unsigned long long)hash;
- (id)copyWithReplacementSpecifier:;
- (id)specifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSpecifier:version:;
- (BOOL)isEqualToSpecVer:;
+ (id)specVerWithSpecifier:version:;
@end
