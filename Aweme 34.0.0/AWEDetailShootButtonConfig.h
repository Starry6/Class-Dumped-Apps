@interface AWEDetailShootButtonConfig : NSObject
@property (nonatomic) NSString iconImageName;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} iconBound;
@property (nonatomic) {UIEdgeInsets=dddd} contentEdgeInsets;
@property (nonatomic) {UIEdgeInsets=dddd} imageEdgeInsets;
@property (nonatomic) {UIEdgeInsets=dddd} titleEdgeInsets;
@property (nonatomic) BOOL useWhiteStyle;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) UIColor backgroundColor;
- (void)setIconBound:;
- (id)iconBound;
- (BOOL)useWhiteStyle;
- (void)setUseWhiteStyle:;
- (id)iconImage;
- (void)setIconImageName:;
- (void)setContentEdgeInsets:;
- (id)imageEdgeInsets;
- (id)contentEdgeInsets;
- (void)setIconImage:;
- (void)setImageEdgeInsets:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)iconImageName;
- (id)titleEdgeInsets;
- (void)setTitleEdgeInsets:;
+ (id)duetConfig;
+ (id)defaultConfig;
@end
