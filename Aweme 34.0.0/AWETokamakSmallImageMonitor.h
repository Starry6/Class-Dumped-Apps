@interface AWETokamakSmallImageMonitor : AWETokamakImageMonitor
@property (nonatomic) double threshold;
@property (nonatomic) NSArray whiteList;
@property (nonatomic) BOOL isTakeScaleIntoAccount;
- (id)whiteList;
- (void)setWhiteList:;
- (void)receiveImageModel:;
- (BOOL)isTakeScaleIntoAccount;
- (void)setIsTakeScaleIntoAccount:;
- (double)threshold;
- (id)initWithConfig:;
- (void)setThreshold:;
- (void).cxx_destruct;
@end
