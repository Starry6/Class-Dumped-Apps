@interface AWEIMInvalidExposureInfoModel : AWEIMRecentSharedInfoModel
@property (nonatomic) q invalidExposureCount;
@property (nonatomic) double lastInvalidExposureTime;
- (id)initWithShareModel:;
- (long long)invalidExposureCount;
- (void)setInvalidExposureCount:;
- (double)lastInvalidExposureTime;
- (void)setLastInvalidExposureTime:;
- (id)initWithInfoModel:;
@end
