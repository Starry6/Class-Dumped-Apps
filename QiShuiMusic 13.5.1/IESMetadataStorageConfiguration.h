@interface IESMetadataStorageConfiguration : NSObject
@property (nonatomic) BOOL enableIndexLog;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSInteger metadataCapacity;
@property (nonatomic) q logLevel;
- (BOOL)enableIndexLog;
- (int)metadataCapacity;
- (void)setEnableIndexLog:;
- (void)setMetadataCapacity:;
- (id)filePath;
- (void)setFilePath:;
- (void)setLogLevel:;
- (long long)logLevel;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)configurationWithFilePath:;
@end
