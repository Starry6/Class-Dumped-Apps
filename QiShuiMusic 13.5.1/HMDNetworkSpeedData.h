@interface HMDNetworkSpeedData : NSObject
@property (nonatomic) double uploadSpeed_WIFI;
@property (nonatomic) double downloadSpeed_WIFI;
@property (nonatomic) double uploadSpeed_cellular;
@property (nonatomic) double downloadSpeed_cellular;
@property (nonatomic) double actualAverageTime;
@property (nonatomic) BOOL cellularAvailable;
@property (nonatomic) BOOL WIFIAvailable;
- (BOOL)isWIFIAvailable;
- (double)actualAverageTime;
- (double)downloadSpeed_WIFI;
- (double)downloadSpeed_cellular;
- (BOOL)isCellularAvailable;
- (void)setActualAverageTime:;
- (void)setCellularAvailable:;
- (void)setDownloadSpeed_WIFI:;
- (void)setDownloadSpeed_cellular:;
- (void)setUploadSpeed_WIFI:;
- (void)setUploadSpeed_cellular:;
- (void)setWIFIAvailable:;
- (double)uploadSpeed_WIFI;
- (double)uploadSpeed_cellular;
+ (id)stringlizationOfSpeed:;
@end
