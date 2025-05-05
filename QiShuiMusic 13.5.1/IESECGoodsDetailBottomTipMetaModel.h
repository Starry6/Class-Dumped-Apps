@interface IESECGoodsDetailBottomTipMetaModel : MTLModel
@property (nonatomic) BOOL displayAsCountDown;
@property (nonatomic) NSString countDownTemplate;
@property (nonatomic) NSString tipURL;
@property (nonatomic) NSString trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (id)countDownTemplate;
- (BOOL)displayAsCountDown;
- (void)setCountDownTemplate:;
- (void)setDisplayAsCountDown:;
- (void)setTipURL:;
- (id)tipURL;
- (id)trackParams;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
