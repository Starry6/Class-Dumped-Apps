@interface AWEProfileHeaderVSBannerCell : UICollectionViewCell
@property (nonatomic) AWEWebViewController bannerViewController;
@property (nonatomic) UIView<IESHYContainerProtocol> liveHybridContainer;
@property (nonatomic) NSString schema;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (void)onTapGestureAction:;
- (void)handleTapGestureWithLocation:;
- (id)bannerViewController;
- (void)setBannerViewController:;
- (id)liveHybridContainer;
- (void)setLiveHybridContainer:;
- (void)bannerDidAppear;
- (void)bannerDidDisappear;
- (id)schema;
- (void)setSchema:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
@end
