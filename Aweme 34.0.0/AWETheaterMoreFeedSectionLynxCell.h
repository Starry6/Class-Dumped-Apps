@interface AWETheaterMoreFeedSectionLynxCell : UICollectionViewCell
@property (nonatomic) AWETheaterMoreFeedSectionItem sectionItem;
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) UIView<HunterContainerProtocol> containerView;
@property (nonatomic) <BDXContianerBuilderProtocol> containerBuilder;
@property (nonatomic) UIView placeholderView;
@property (nonatomic) @? sizeChangedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)containerWillStartLoading:;
- (void)container:didStartFetchResourceWithURL:;
- (void)container:didFetchedResource:error:;
- (void)containerDidFirstScreen:;
- (void)container:didRecieveError:;
- (id)containerBuilder;
- (void)loadFailedWithURL:error:;
- (id)globalPropsForInitialize;
- (void)updateGlobalProps;
- (id)sizeChangedBlock;
- (void)configWithSectionItem:context:;
- (void)setSizeChangedBlock:;
- (void)showPlaceholderView;
- (void)dismissPlaceholderView;
- (void)loadLynxCard;
- (id)globalPropsWithURLString:sectionItem:;
- (void)setContainerBuilder:;
- (void)setPlaceholderView:;
- (id)placeholderView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
- (void)setSectionItem:;
- (id)sectionItem;
@end
