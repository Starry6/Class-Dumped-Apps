@interface IESECLiveCountDownElementModel : MTLModel
@property (nonatomic) IESECLiveConfigCountDownModel countDown;
@property (nonatomic) NSString countDownColor;
@property (nonatomic) double countDownTextSize;
@property (nonatomic) NSArray countDownFinishContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)countDownColor;
- (id)countDownFinishContent;
- (double)countDownTextSize;
- (void)setCountDown:;
- (void)setCountDownColor:;
- (void)setCountDownFinishContent:;
- (void)setCountDownTextSize:;
- (void).cxx_destruct;
- (id)countDown;
+ (id)countDownFinishContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
