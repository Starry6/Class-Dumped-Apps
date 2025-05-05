@interface PTButtonRow : PTSRow
@property (nonatomic) NSString outletKeyPath;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_defaultAction;
- (id)outletKeyPath:;
- (id)outletKeyPath;
- (void)setOutletKeyPath:;
+ (BOOL)supportsSecureCoding;
+ (id)rowWithTitle:action:;
+ (id)restoreDefaultSettingsButton;
+ (id)rowWithTitle:outletKeyPath:;
@end
