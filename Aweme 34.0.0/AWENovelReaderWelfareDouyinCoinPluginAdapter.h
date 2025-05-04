@interface AWENovelReaderWelfareDouyinCoinPluginAdapter : HTSService
@property (nonatomic) BDReaderModel readerModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)readerModel;
- (void)setReaderModel:;
- (void)pluginReaderBookInfoDidReady;
- (id)createBottomBarViewWithReaderModel:pageContext:;
- (id)welfareRequestBottomViewWithReaderModel:pageContext:bottomFrame:;
- (void)transferDataWithDictionary:;
- (long long)exitNoticeViewMaxShowTimesInOneDay;
- (BOOL)isShowExitNoticeViewWithChapterId:;
- (id)getExitNoticeViewWithUserInfoDict:chapterId:;
- (void)tapExitNoticeViewButton:;
- (id)init;
- (void).cxx_destruct;
@end
