@interface ASDBetaAppDisplayNames : NSObject
@property (nonatomic) NSDictionary localizedNames;
@property (nonatomic) NSString primaryLocale;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizedNames;
- (void)setLocalizedNames:;
- (id)primaryLocale;
- (void)setPrimaryLocale:;
+ (BOOL)supportsSecureCoding;
+ (id)displayNameWithLocalizedNames:andPrimaryLocale:;
@end
