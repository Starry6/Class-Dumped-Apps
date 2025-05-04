@interface AWEDiskUniversalCleanView : AWEDiskCleanBaseView
@property (nonatomic) AWEUniversalCleanHeaderView internalHeaderView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) AWEUITextLoadingView loading;
@property (nonatomic) float cleneSize;
@property (nonatomic) q progress;
- (void)addCustomView;
- (void)setCleanModels:;
- (void)setInternalHeaderView:;
- (id)internalHeaderView;
- (void)setCleneSize:;
- (void)updatePercentDesc:;
- (float)cleneSize;
- (id)initWithFrame:;
- (long long)progress;
- (void).cxx_destruct;
- (id)loading;
- (void)setLoading:;
- (void)setProgress:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
