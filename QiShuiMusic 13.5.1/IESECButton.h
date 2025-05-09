@interface IESECButton : UIControl
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) NSMutableDictionary stateMap;
@property (nonatomic) double cornerRadius;
@property (nonatomic) Q corners;
@property (nonatomic) UIImage currentImage;
@property (nonatomic) NSString currentState;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) q imagePostion;
@property (nonatomic) UIFont font;
@property (nonatomic) q imageViewContentMode;
@property (nonatomic) {UIEdgeInsets=dddd} contentEdgeInsets;
@property (nonatomic) double imageTextSpacing;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) double imageBorderWidth;
@property (nonatomic) UIColor imageBorderColor;
@property (nonatomic) q horizontalAlignment;
@property (nonatomic) q verticalAlignment;
- (void)iesec_setCurrentBundleImageMap:;
- (id)iesec_touchSize;
- (id)iesec_HitTestExpendEdgeInsets;
- (void)iesec_asyncSetBundleImageNamed:forState:;
- (void)iesec_asyncSetBundleImageNamed:forState:renderingMode:;
- (id)iesec_currentBundleImageMap;
- (id)iesec_currentBundleImageNameForState:;
- (void)iesec_setCurrentBundleImageName:forState:;
- (void)iesec_setHitTestExpendEdgeInsets:;
- (void)iesec_setTouchSize:;
- (id)imageBorderColor;
- (long long)imagePostion;
- (id)imageURLForState:;
- (id)initWithBDImage:;
- (id)initWithColorType:sizeType:;
- (id)initWithFrame:useBDImage:;
- (void)removeValueForKey:forState:;
- (void)setBackgroundColor:borderColor:borderWidth:cornerRadius:;
- (void)setBackgroundColor:borderColor:borderWidth:cornerRadius:atCorners:;
- (void)setGradientColors:startPoint:endPoint:locations:;
- (void)setImageBorderColor:;
- (void)setImageBorderWidth:;
- (void)setImagePostion:;
- (void)setImageTextSpacing:;
- (void)setImageURL:placeholderImage:size:forState:;
- (void)setImageURLArray:placeholderImage:size:forState:;
- (void)setImageViewHidden:;
- (void)setMultiLineAttributedTitle:forState:;
- (void)setValue:forKey:forState:;
- (void)setupImagePositionWithIconDirection:;
- (void)setupWithTextWithIconElement:;
- (BOOL)validateValueForKey:forState:;
- (id)valueForKey:forState:;
- (void)setTitleLineBreakMode:;
- (long long)verticalAlignment;
- (void)setCurrentState:;
- (void)setContentEdgeInsets:;
- (id)backgroundImageView;
- (id)contentView;
- (id)currentState;
- (void)setTitleLabel:;
- (void)setAttributedTitle:forState:;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)setStateMap:;
- (id)gradientLayer;
- (void)setFont:;
- (id)contentEdgeInsets;
- (void)setTitle:forState:;
- (void)setVerticalAlignment:;
- (id)imageSize;
- (id)initWithFrame:;
- (void)setImage:forState:;
- (void)layout;
- (void)setImageTintColor:;
- (void)setCornerRadius:;
- (id)stateMap;
- (void).cxx_destruct;
- (id)font;
- (id)imageView;
- (void)setContentView:;
- (id)currentImage;
- (double)cornerRadius;
- (unsigned long long)corners;
- (void)updateConstraints;
- (id)titleLabel;
- (void)setImageView:;
- (id)titleForState:;
- (id)backgroundColorForState:;
- (void)setBackgroundColor:forState:;
- (void)setTitleColor:forState:;
- (id)titleColorForState:;
- (id)imageForState:;
- (id)attributedTitleForState:;
- (void)setImageSize:;
- (void)setGradientLayer:;
- (double)imageTextSpacing;
- (void)setHorizontalAlignment:;
- (void)setBackgroundImageView:;
- (void)updateColor:;
- (long long)horizontalAlignment;
- (long long)imageViewContentMode;
- (void)setImageViewContentMode:;
- (void)setCorners:;
- (void)setImageCornerRadius:;
- (double)imageCornerRadius;
- (void)stateDidChange;
- (double)imageBorderWidth;
- (void)updateSize:;
+ (id)buttonSizeWithTextWithIconElement:;
@end
