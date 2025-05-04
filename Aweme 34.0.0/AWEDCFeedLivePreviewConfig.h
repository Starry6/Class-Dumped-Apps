@interface AWEDCFeedLivePreviewConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL disablePlayLive;
@property (nonatomic) NSString livePreviewBizDomain;
@property (nonatomic) NSString livePreviewPageName;
@property (nonatomic) NSString livePreviewBlockName;
@property (nonatomic) NSString livePreviewIndex;
@property (nonatomic) NSString livePreviewEnterMethod;
@property (nonatomic) NSString livePreviewScene;
@property (nonatomic) @? livePreviewClickCustomConfigBlock;
- (BOOL)disablePlayLive;
- (void)setDisablePlayLive:;
- (id)livePreviewBizDomain;
- (void)setLivePreviewBizDomain:;
- (id)livePreviewPageName;
- (void)setLivePreviewPageName:;
- (id)livePreviewBlockName;
- (void)setLivePreviewBlockName:;
- (id)livePreviewIndex;
- (void)setLivePreviewIndex:;
- (id)livePreviewEnterMethod;
- (void)setLivePreviewEnterMethod:;
- (id)livePreviewScene;
- (void)setLivePreviewScene:;
- (id)livePreviewClickCustomConfigBlock;
- (void)setLivePreviewClickCustomConfigBlock:;
- (void).cxx_destruct;
@end
