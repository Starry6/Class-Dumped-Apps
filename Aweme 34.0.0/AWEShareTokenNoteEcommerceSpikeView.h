@interface AWEShareTokenNoteEcommerceSpikeView : AWEShareTokenNoteBaseCardView
@property (nonatomic) NSString schema;
@property (nonatomic) AWEShareSpikeContainerView containerView;
@property (nonatomic) AWEShareSpikeGoodsModel model;
@property (nonatomic) double firstInitTime;
- (void)setupUIWithModel:;
- (id)initWithModel:withSpikeModel:;
- (void)setFirstInitTime:;
- (void)dismissButtonTapped;
- (double)firstInitTime;
- (void)actionButtonClick;
- (void)mainImageClick;
- (void)viewDidShow;
- (void)goToSpikeChannel;
- (id)schema;
- (void)setModel:;
- (void)setSchema:;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
@end
