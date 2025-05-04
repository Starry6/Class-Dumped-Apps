@interface AWEPSLGameBannerCellController : AWEPadListReusableViewBaseController
@property (nonatomic) MMKV mmkv;
@property (nonatomic) BOOL displayTimeStampRecorded;
@property (nonatomic) BOOL hasShow;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)hasShow;
- (void)setHasShow:;
- (void)viewDidDisplay;
- (void)configView:;
- (BOOL)isViewAvailable;
- (BOOL)displayTimeStampRecorded;
- (void)setDisplayTimeStampRecorded:;
- (Class)viewClass;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
