@interface MBRestoreInfo : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) BOOL wasCloudRestore;
@property (nonatomic) NSString deviceBuildVersion;
@property (nonatomic) NSString backupBuildVersion;
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithDictionaryRepresentation:;
- (id)date;
- (void)encodeWithCoder:;
- (void)setDate:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)deviceBuildVersion;
- (void)setWasCloudRestore:;
- (void)setDeviceBuildVersion:;
- (void)setBackupBuildVersion:;
- (BOOL)wasCloudRestore;
- (id)backupBuildVersion;
+ (BOOL)supportsSecureCoding;
@end
