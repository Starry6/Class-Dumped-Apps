@interface AWEFeedLiveTabStickerComponent : AWEFeedLiveTabBaseComponent
@property (nonatomic) NSMutableArray stickerData;
@property (nonatomic) AWEFeedLiveTabStickerView stickerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)feedLiveTabDidEnter:;
- (void)updateComponentWith:;
- (void)bindService;
- (double)heightOfComponent;
- (void)viewTransitioningToSize:;
- (void)reportTabShow;
- (void)tabModuleShowWithItem:;
- (void)tabModuleClickWithItem:;
- (void)setStickerData:;
- (id)stickerData;
- (id)tabModuleParamsWithItem:;
- (id)moduleNameWithTagType:;
- (id)init;
- (double)topPadding;
- (id)contentView;
- (void).cxx_destruct;
- (void)setupView;
- (void)setStickerView:;
- (id)stickerView;
@end
