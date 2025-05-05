@interface IESECGoodsFeedResourceCard : IESECGoodsFeedBaseCell
@property (nonatomic) IESECGoodsFeedResourceCardBuilder cardBuilder;
@property (nonatomic) IESECGoodsFeedResourceCardLynxViewController lynxCardVC;
@property (nonatomic) BDXBridgeEventSubscriber bridgeEventSubscriber;
@property (nonatomic) IESECFeedResourceCardModel resourceCardModel;
- (void)setCardBuilder:;
- (void)__registerSubscribes;
- (void)__unregisterSubscriber;
- (id)bridgeEventSubscriber;
- (id)cardBuilder;
- (id)lynxCardVC;
- (void)resourceCardDidClick:;
- (id)resourceCardModel;
- (void)setBridgeEventSubscriber:;
- (void)setLynxCardVC:;
- (void)setResourceCardShadow;
- (void)updateWithResourceCardModel:;
- (void)updateWithResourceCardModel:size:;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateWithViewModel:;
+ (double)heightOfResourceCard:withContentWidth:;
@end
