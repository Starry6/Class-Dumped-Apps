@interface AWEDiskExtremelyCleanView : AWEDiskCleanBaseView
@property (nonatomic) AWEDouyinDiskSpaceIndicator spaceIndicator;
@property (nonatomic) q progress;
- (void)setCleanModels:;
- (void)setSpaceIndicator:;
- (id)spaceIndicator;
- (void)updateUIWithAppSize:totalSize:freeSize:;
- (void)updateUIWithCacheSize:;
- (id)initWithFrame:;
- (long long)progress;
- (void).cxx_destruct;
- (void)setProgress:;
@end
