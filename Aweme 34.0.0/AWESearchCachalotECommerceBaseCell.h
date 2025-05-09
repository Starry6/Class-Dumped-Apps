@interface AWESearchCachalotECommerceBaseCell : UICollectionViewCell
@property (nonatomic) AWESearchLayoutDelegateContainerView p_container;
@property (nonatomic) double currPlaybackTime;
@property (nonatomic) @ delegate;
@property (nonatomic) NSDictionary extraTrackParams;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) AWESearchCachalotECommerceContext context;
@property (nonatomic) AWESearchEcommerceActionRecord actionRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)currPlaybackTime;
- (void)configWithModel:;
- (id)extraTrackParams;
- (void)setExtraTrackParams:;
- (void)componentPageViewWillAppear:;
- (void)componentPageViewDidAppear:;
- (void)componentPageViewWillDisappear:;
- (void)componentPageViewDidDisappear:;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentActivationDidChange:;
- (void)componentDidEndDisplay;
- (void)componentHighlighted:backgroundView:;
- (void)componentPrepareForReuse;
- (void)setCurrPlaybackTime:;
- (id)actionRecord;
- (id)p_container;
- (void)setP_container:;
- (void)setActionRecord:;
- (id)delegate;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)context;
- (id)componentView;
- (void)updateWithViewModel:;
+ (double)heightForModel:containerWidth:;
+ (id)sizeWithViewModel:width:;
+ (id)identifier;
@end
