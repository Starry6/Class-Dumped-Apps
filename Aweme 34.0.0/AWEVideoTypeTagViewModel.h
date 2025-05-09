@interface AWEVideoTypeTagViewModel : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor tagTextColor;
@property (nonatomic) NSString tagText;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString iconImageLink;
@property (nonatomic) {CGSize=dd} customIconImageSize;
@property (nonatomic) double tagHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double spacing;
@property (nonatomic) @? iconLoadCompletion;
@property (nonatomic) @? updateTagLabelBlock;
@property (nonatomic) BOOL hideIcon;
@property (nonatomic) double tagTextFontSize;
- (void)setTagText:;
- (id)tagText;
- (void)setTagTextColor:;
- (id)tagTextColor;
- (void)setTagHeight:;
- (void)setCustomIconImageSize:;
- (void)setTagTextFontSize:;
- (void)setUpdateTagLabelBlock:;
- (id)iconImageLink;
- (void)setIconImageLink:;
- (id)customIconImageSize;
- (double)tagHeight;
- (id)iconLoadCompletion;
- (void)setIconLoadCompletion:;
- (id)updateTagLabelBlock;
- (double)tagTextFontSize;
- (double)spacing;
- (void)setSpacing:;
- (void)setTintColor:;
- (id)iconImage;
- (id)tintColor;
- (void)setIconImage:;
- (void)setCornerRadius:;
- (double)horizontalPadding;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setHorizontalPadding:;
- (BOOL)hideIcon;
- (void)setHideIcon:;
+ (id)defaultViewModel;
@end
