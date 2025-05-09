@interface IESECSliceXContainerView : UIView
@property (nonatomic) IESECSliceXBaseView contentView;
@property (nonatomic) UIView<IESECSliceXElementView> rootView;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double previousScaleFactor;
@property (nonatomic) {CGSize=dd} previousSize;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) IESECSliceXContainerInfo info;
@property (nonatomic) BOOL isLoadingRootView;
@property (nonatomic) IESECSliceXInnerTracker innerTacker;
@property (nonatomic) BOOL shouldHitTestPassthroughRootView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createElementViewContextWithPack:;
- (id)currentCommonParams;
- (void)flexDidLayout:;
- (id)getElementViewWithKey:error:;
- (id)getStorageDataWithKey:filter:error:;
- (void)handleAction:withView:;
- (id)initWithSliceXInstance:;
- (id)innerTacker;
- (BOOL)isLoadingRootView;
- (void)loadRootViewWithResourceData:resourceMetaData:error:;
- (void)loadRootViewWithResourceURL:resourceMetaData:complete:;
- (BOOL)loadRootViewWithResourceURL:resourceMetaData:error:;
- (id)popLoadContext;
- (id)popUpdateContext;
- (double)previousScaleFactor;
- (void)pushLoadContextWithURL:metaData:complete:;
- (void)pushUpdateContextWithDataSource:complete:;
- (void)pushUpdateContextWithDataSource:fitSize:complete:;
- (void)setPreviousScaleFactor:;
- (void)setShouldHitTestPassthroughRootView:;
- (BOOL)shouldHitTestPassthroughRootView;
- (void)updateInnerTacker;
- (void)updateRootViewWithDataSource:complete:;
- (id)updateRootViewWithDataSource:error:;
- (void)updateRootViewWithDataSource:fitSize:complete:;
- (id)updateRootViewWithDataSource:fitSize:error:;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:complete:;
- (void)updateRootViewWithoutCalculateSizeWithDataSource:error:;
- (void)updateScaleFactor:;
- (id)contentView;
- (id)intrinsicContentSize;
- (double)scaleFactor;
- (void)layoutSubviews;
- (void)setPreviousSize:;
- (id)previousSize;
- (void)setScaleFactor:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)contentSize;
- (id)info;
- (void)setContentView:;
- (void)setContentSize:;
- (id)rootView;
- (void)setRootView:;
- (void)handleAction:;
@end
