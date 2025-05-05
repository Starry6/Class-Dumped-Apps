@interface PLDuetActivitySchedulerUsageSnapshot : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate stopDate;
@property (nonatomic) double numberOfBytesUploadedWiFi;
@property (nonatomic) double numberOfBytesDownloadedWiFi;
@property (nonatomic) double numberOfBytesUploadedCell;
@property (nonatomic) double numberOfBytesDownloadedCell;
@property (nonatomic) NSString bundleID;
- (id)startDate;
- (void)setStartDate:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)stopDate;
- (void)setBundleID:;
- (void)setStopDate:;
- (double)numberOfBytesUploadedWiFi;
- (void)setNumberOfBytesUploadedWiFi:;
- (double)numberOfBytesDownloadedWiFi;
- (void)setNumberOfBytesDownloadedWiFi:;
- (double)numberOfBytesUploadedCell;
- (void)setNumberOfBytesUploadedCell:;
- (double)numberOfBytesDownloadedCell;
- (void)setNumberOfBytesDownloadedCell:;
@end
