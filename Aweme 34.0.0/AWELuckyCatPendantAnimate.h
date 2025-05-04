@interface AWELuckyCatPendantAnimate : MTLModel
@property (nonatomic) AWELuckyCatLottieResource lottieResource;
@property (nonatomic) q animateType;
@property (nonatomic) AWELuckyCatPendantDescTemplate title;
@property (nonatomic) AWELuckyCatPendantDescTemplate subTitle;
@property (nonatomic) NSString animateKey;
@property (nonatomic) double offset;
@property (nonatomic) BOOL hideScore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnimateType:;
- (long long)animateType;
- (id)lottieResource;
- (void)setLottieResource:;
- (id)animateKey;
- (void)setAnimateKey:;
- (BOOL)hideScore;
- (void)setHideScore:;
- (void)setOffset:;
- (double)offset;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
