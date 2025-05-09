@interface AWEUGPendantNewCapsuleContentProgressBar : MTLModel
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString rateColor;
@property (nonatomic) NSString rateStartColor;
@property (nonatomic) NSString firstShowBubbleText;
@property (nonatomic) NSString processPauseBubbleText;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} expandUIFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} foldUIFrame;
@property (nonatomic) NSNumber cornerRadius;
@property (nonatomic) NSNumber verticalWidth;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expandUIFrame;
- (id)foldUIFrame;
- (void)setExpandUIFrame:;
- (void)setFoldUIFrame:;
- (id)verticalWidth;
- (id)firstShowBubbleText;
- (id)processPauseBubbleText;
- (id)rateStartColor;
- (id)rateColor;
- (void)setRateColor:;
- (void)setRateStartColor:;
- (void)setFirstShowBubbleText:;
- (void)setProcessPauseBubbleText:;
- (void)setVerticalWidth:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (id)cornerRadius;
- (id)bgColor;
- (void)setBgColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
