@interface BU_IESGurdUnzipPackageInfo : NSObject
@property (nonatomic) BOOL successful;
@property (nonatomic) NSError error;
@property (nonatomic) q unzipDuration;
- (void)setUnzipDuration:;
- (long long)unzipDuration;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)setSuccessful:;
- (BOOL)isSuccessful;
@end
