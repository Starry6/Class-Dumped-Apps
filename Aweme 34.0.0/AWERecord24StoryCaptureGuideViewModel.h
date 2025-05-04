@interface AWERecord24StoryCaptureGuideViewModel : ACCRecorderViewModel
@property (nonatomic) NSDictionary configDict;
- (BOOL)shouldShowGuideView;
- (double)delayDismissGuideViewTime;
- (id)viewConfigModel;
- (void)increaseGuideViewShowedCount;
- (long long)cachedGuideShowedCount;
- (long long)guideViewMaxShowTime;
- (id)cachedGuideShowedKey;
- (id)configDict;
- (void)setConfigDict:;
- (void).cxx_destruct;
@end
