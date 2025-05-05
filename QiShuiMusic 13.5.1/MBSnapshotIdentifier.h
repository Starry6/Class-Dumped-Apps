@interface MBSnapshotIdentifier : NSObject
@property (nonatomic) NSString backupUDID;
@property (nonatomic) Q snapshotID;
@property (nonatomic) NSString backupUUID;
@property (nonatomic) NSString snapshotUUID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)backupUUID;
- (unsigned long long)snapshotID;
- (id)initWithBackupUDID:snapshotID:;
- (id)initWithBackupUUID:snapshotUUID:;
- (id)snapshotUUID;
- (id)backupUDID;
- (void)setBackupUDID:;
- (void)setSnapshotID:;
+ (BOOL)supportsSecureCoding;
@end
