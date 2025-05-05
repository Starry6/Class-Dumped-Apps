@interface ASDJobManagerOptions : NSObject
@property (nonatomic) BOOL shouldReportDownloadProgress;
@property (nonatomic) NSString persistenceIdentifier;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;
- (id)persistenceIdentifier;
- (void)setShouldReportDownloadProgress:;
- (id)initWithCoder:;
- (BOOL)shouldReportDownloadProgress;
- (void)encodeWithCoder:;
- (BOOL)shouldFilterExternalOriginatedDownloads;
- (void)setPersistenceIdentifier:;
- (void).cxx_destruct;
- (void)setShouldFilterExternalOriginatedDownloads:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
