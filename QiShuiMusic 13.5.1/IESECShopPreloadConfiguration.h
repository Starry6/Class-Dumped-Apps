@interface IESECShopPreloadConfiguration : NSObject
@property (nonatomic) double validDuration;
@property (nonatomic) double invalidSeconds;
@property (nonatomic) double reinitValidDuration;
@property (nonatomic) BOOL enableReinitValid;
@property (nonatomic) Q preloadType;
@property (nonatomic) NSString customTabPath;
@property (nonatomic) NSString customInfoPath;
- (void)setPreloadType:;
- (id)customInfoPath;
- (id)customTabPath;
- (BOOL)enableReinitValid;
- (double)invalidSeconds;
- (double)reinitValidDuration;
- (void)setCustomInfoPath:;
- (void)setCustomTabPath:;
- (void)setEnableReinitValid:;
- (void)setInvalidSeconds:;
- (void)setReinitValidDuration:;
- (void).cxx_destruct;
- (double)validDuration;
- (void)setValidDuration:;
- (unsigned long long)preloadType;
@end
