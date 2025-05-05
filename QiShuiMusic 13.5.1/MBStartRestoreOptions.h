@interface MBStartRestoreOptions : NSObject
@property (nonatomic) NSSet excludedAppBundleIDs;
@property (nonatomic) MBCellularAccess cellularAccess;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)excludedAppBundleIDs;
- (void)setExcludedAppBundleIDs:;
- (id)cellularAccess;
- (void)setCellularAccess:;
+ (BOOL)supportsSecureCoding;
@end
