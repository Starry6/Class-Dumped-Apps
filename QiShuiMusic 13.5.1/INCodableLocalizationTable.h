@interface INCodableLocalizationTable : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString tableName;
- (id)bundleIdentifier;
- (id)tableName;
- (id)initWithBundleIdentifier:tableName:;
- (void)setTableName:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
