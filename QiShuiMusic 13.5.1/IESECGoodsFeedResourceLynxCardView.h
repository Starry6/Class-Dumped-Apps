@interface IESECGoodsFeedResourceLynxCardView : IESECGoodsFeedBaseCell
@property (nonatomic) IESECLynxCard lynxCard;
@property (nonatomic) IESECLynxCardModel lynxCardModel;
@property (nonatomic) IESECGoodsFeedLynxResourceCellViewModel vm;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxCard;
- (void)lynxCard:didFinishLoadWithURL:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:sizeDidChanged:;
- (id)lynxCardModel;
- (void)setLynxCard:;
- (void)setLynxCardModel:;
- (void)setVm:;
- (id)vm;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupView;
- (void)updateWithViewModel:;
@end
