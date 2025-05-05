@interface GEOAnalyticsHandlingInfo : NSObject
@property (nonatomic) q logMsgType;
@property (nonatomic) q persistCount;
@property (nonatomic) q uploadSuccessCountOnWifi;
@property (nonatomic) q uploadSuccessByteCountOnWifi;
@property (nonatomic) q uploadSuccessCountOnCellular;
@property (nonatomic) q uploadSuccessByteCountOnCellular;
@property (nonatomic) q uploadFailureCount;
@property (nonatomic) q dbExpireCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)logMsgType;
- (void)setLogMsgType:;
- (long long)persistCount;
- (void)setPersistCount:;
- (long long)uploadSuccessCountOnWifi;
- (void)setUploadSuccessCountOnWifi:;
- (long long)uploadSuccessByteCountOnWifi;
- (void)setUploadSuccessByteCountOnWifi:;
- (long long)uploadSuccessCountOnCellular;
- (void)setUploadSuccessCountOnCellular:;
- (long long)uploadSuccessByteCountOnCellular;
- (void)setUploadSuccessByteCountOnCellular:;
- (long long)uploadFailureCount;
- (void)setUploadFailureCount:;
- (long long)dbExpireCount;
- (void)setDbExpireCount:;
+ (BOOL)supportsSecureCoding;
@end
