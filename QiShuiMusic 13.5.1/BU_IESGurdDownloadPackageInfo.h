@interface BU_IESGurdDownloadPackageInfo : NSObject
@property (nonatomic) BOOL successful;
@property (nonatomic) Q downloadSize;
@property (nonatomic) BOOL patch;
@property (nonatomic) Q packageId;
@property (nonatomic) q downloadDuration;
@property (nonatomic) NSError error;
- (unsigned long long)packageId;
- (void)setPackageId:;
- (void)setError:;
- (unsigned long long)downloadSize;
- (id)error;
- (BOOL)isPatch;
- (void).cxx_destruct;
- (void)setDownloadSize:;
- (id)description;
- (void)setSuccessful:;
- (BOOL)isSuccessful;
- (void)setPatch:;
- (long long)downloadDuration;
- (void)setDownloadDuration:;
@end
