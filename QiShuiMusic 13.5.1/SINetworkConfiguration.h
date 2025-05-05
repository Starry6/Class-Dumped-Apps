@interface SINetworkConfiguration : NSObject
@property (nonatomic) NSString networkPath;
@property (nonatomic) q engineType;
@property (nonatomic) BOOL runByE5RT;
@property (nonatomic) NSMutableSet disabledOutputBlobs;
@property (nonatomic) NSString loggerPrefix;
@property (nonatomic) BOOL supportZeroCopy;
@property (nonatomic) NSString networkMode;
@property (nonatomic) NSString networkName;
- (void)setNetworkName:;
- (id)init;
- (id)networkPath;
- (long long)engineType;
- (void).cxx_destruct;
- (id)networkName;
- (void)setEngineType:;
- (id)networkMode;
- (void)setNetworkMode:;
- (void)setNetworkPath:;
- (BOOL)runByE5RT;
- (void)setRunByE5RT:;
- (id)disabledOutputBlobs;
- (void)setDisabledOutputBlobs:;
- (id)loggerPrefix;
- (void)setLoggerPrefix:;
- (BOOL)supportZeroCopy;
- (void)setSupportZeroCopy:;
+ (id)algorithmClass;
@end
