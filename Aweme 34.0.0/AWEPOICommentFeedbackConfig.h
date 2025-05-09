@interface AWEPOICommentFeedbackConfig : NSObject
@property (nonatomic) Q contentType;
@property (nonatomic) Q contentMode;
@property (nonatomic) Q themeStyle;
@property (nonatomic) Q hostType;
@property (nonatomic) BOOL impactEnabled;
@property (nonatomic) BOOL animationEnabled;
@property (nonatomic) BOOL layerBorderEnabled;
@property (nonatomic) BOOL adaptForCommentTab;
@property (nonatomic) BOOL hideTextEnabled;
@property (nonatomic) UIColor diggedTextColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIFont font;
@property (nonatomic) {UIEdgeInsets=dddd} innerInset;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double innerSpacing;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) BOOL groupEnabled;
@property (nonatomic) {UIEdgeInsets=dddd} groupInset;
@property (nonatomic) double groupCornerRadius;
@property (nonatomic) UIColor groupBorderColor;
@property (nonatomic) double groupBorderWidth;
@property (nonatomic) double fixedWidth;
- (void)setThemeStyle:;
- (BOOL)adaptForCommentTab;
- (BOOL)layerBorderEnabled;
- (id)innerInset;
- (double)innerSpacing;
- (BOOL)impactEnabled;
- (id)diggedTextColor;
- (BOOL)hideTextEnabled;
- (BOOL)groupEnabled;
- (void)setImpactEnabled:;
- (void)setInnerSpacing:;
- (void)setGroupEnabled:;
- (void)setGroupInset:;
- (void)setGroupCornerRadius:;
- (void)setGroupBorderColor:;
- (void)setGroupBorderWidth:;
- (void)setLayerBorderEnabled:;
- (void)setAdaptForCommentTab:;
- (void)setHideTextEnabled:;
- (void)setDiggedTextColor:;
- (void)setInnerInset:;
- (BOOL)hasDislikeExistInFeedback;
- (id)groupInset;
- (double)groupCornerRadius;
- (id)groupBorderColor;
- (double)groupBorderWidth;
- (void)setBorderColor:;
- (void)setBorderWidth:;
- (double)borderWidth;
- (id)borderColor;
- (double)itemSpacing;
- (unsigned long long)contentType;
- (void)setCornerRadius:;
- (void)setContentType:;
- (void)setTextColor:;
- (void)setItemSpacing:;
- (id)backgroundColor;
- (id)font;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setImageSize:;
- (void)setFont:;
- (id)imageSize;
- (id)textColor;
- (unsigned long long)contentMode;
- (void)setContentMode:;
- (void)setFixedWidth:;
- (unsigned long long)themeStyle;
- (double)fixedWidth;
- (void)setAnimationEnabled:;
- (unsigned long long)hostType;
- (void)setHostType:;
- (BOOL)animationEnabled;
+ (id)rateInCommentConfig;
+ (id)rateConfig;
+ (id)rateInGroupConfig;
+ (id)rateInCommentOptConfig;
+ (id)rateInPhotosPreviewConfigWithType:;
@end
