@interface AWELongVideoPaymentElement : AWEBaseElement
@property (nonatomic) UIView container;
@property (nonatomic) UILabel paymentTag;
@property (nonatomic) UILabel countDownTimerLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)initializeElement;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)paymentTag;
- (void)setPaymentTag:;
- (id)countDownTimerLabel;
- (void)refreshCountLabelWithRemainTime:;
- (void)setCountDownTimerLabel:;
- (void)setContainer:;
- (id)container;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
