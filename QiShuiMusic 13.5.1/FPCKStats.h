@interface FPCKStats : NSObject
@property (nonatomic) q numberOfFilesChecked;
@property (nonatomic) q numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property (nonatomic) q numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (long long)numberOfFilesChecked;
- (void)setNumberOfFilesChecked:;
- (long long)numberOfBrokenFilesInFSAndFSSnapshotCheck;
- (void)setNumberOfBrokenFilesInFSAndFSSnapshotCheck:;
- (long long)numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
- (void)setNumberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck:;
+ (BOOL)supportsSecureCoding;
@end
