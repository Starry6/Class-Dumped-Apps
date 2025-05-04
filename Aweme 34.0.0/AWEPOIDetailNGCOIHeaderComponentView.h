@interface AWEPOIDetailNGCOIHeaderComponentView : DitoComponentView
@property (nonatomic) AWEPOIDetailCOIHeaderView header;
@property (nonatomic) AWEPOIDetailCOIExhibitionHeader exhibitHeader;
@property (nonatomic) AWEPOIDetailNGPageContext context;
@property (nonatomic) AWEPOIDetailNGCOIHeaderComponentViewModel viewModel;
- (void)updateViewModel:;
- (void)updateHeaderMask:;
- (id)exhibitHeader;
- (void)setExhibitHeader:;
- (id)header;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setHeader:;
@end
