@interface MBStartBackupOptions : NSObject
@property (nonatomic) MBCellularAccess cellularAccess;
@property (nonatomic) q backupPolicy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)cellularAccess;
- (void)setCellularAccess:;
- (long long)backupPolicy;
- (void)setBackupPolicy:;
+ (BOOL)supportsSecureCoding;
@end
