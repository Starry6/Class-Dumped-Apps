@interface AWEECOMIMDynamicCardContainerView : UIView
@property (nonatomic) UIView bkgView;
@property (nonatomic) @? onContainerViewClick;
@property (nonatomic) @? onContainerViewClickV2;
@property (nonatomic) @? heightChangeCallback;
@property (nonatomic) @? fetchAndReloadCallback;
@property (nonatomic) @? reloadCallback;
- (id)bkgView;
- (void)setBkgView:;
- (void)setOnContainerViewClick:;
- (void)updateContainerViewWithModelArr:;
- (void)setReloadCallback:;
- (void)setFetchAndReloadCallback:;
- (void)setHeightChangeCallback:;
- (void)setOnContainerViewClickV2:;
- (id)clickableResourceList;
- (id)reloadCallback;
- (id)fetchAndReloadCallback;
- (id)heightChangeCallback;
- (void)p_onContainerViewWithActionModel:contextDict:clickUUID:;
- (id)onContainerViewClickV2;
- (id)onContainerViewClick;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (double)cardContainerViewHeightWithModelArr:cardWidth:;
+ (double)childWidthElementModel:defaultWidth:;
+ (id)cardContainerViewSizeWithModelArr:maxSize:;
@end
