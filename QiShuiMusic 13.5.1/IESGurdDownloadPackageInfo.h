@interface IESGurdDownloadPackageInfo : NSObject
@property (nonatomic) BOOL successful;
@property (nonatomic) Q downloadSize;
@property (nonatomic) BOOL patch;
@property (nonatomic) Q packageId;
@property (nonatomic) q downloadDuration;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) q downloadPriority;
- (unsigned long long)packageId;
- (void)setPackageId:;
- (void)setCancelled:;
- (BOOL)isCancelled;
- (void)setError:;
- (unsigned long long)downloadSize;
- (long long)downloadPriority;
- (id)error;
- (BOOL)isPatch;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
- (void)setDownloadSize:;
- (id)description;
- (void)setSuccessful:;
- (BOOL)isSuccessful;
- (void)setPatch:;
- (long long)downloadDuration;
- (void)setDownloadDuration:;
@end
