@interface PTDrillDownRow : PTSRow
@property (nonatomic) NSString childKeyPath;
- (void)settings:changedValueForKeyPath:;
- (void)dealloc;
- (void)setSettings:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithChildKeyPath:;
- (id)childKeyPath;
+ (BOOL)supportsSecureCoding;
+ (id)rowWithTitle:childSettingsKeyPath:;
+ (id)rowWithTitleKeyPath:childSettingsKeyPath:;
@end
