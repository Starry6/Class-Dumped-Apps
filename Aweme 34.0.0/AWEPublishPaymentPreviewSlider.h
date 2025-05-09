@interface AWEPublishPaymentPreviewSlider : UIControl
@property (nonatomic) UIView sliderView;
@property (nonatomic) UIView rectView;
@property (nonatomic) UIView activeView;
@property (nonatomic) DUXBaseImageView leftThumbImageView;
@property (nonatomic) DUXBaseImageView rightThumbImageView;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) DUXBaseLabel valueLabel;
@property (nonatomic) UIView progressView;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double slideMinValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSString title;
@property (nonatomic) AWEPublishPaymentPreviewThumb leftThumb;
@property (nonatomic) AWEPublishPaymentPreviewThumb rightThumb;
@property (nonatomic) <AWEPublishPaymentPreviewSliderDelegate> delegate;
@property (nonatomic) @? valChangeBlock;
- (void)updateLeftThumbValue:;
- (void)updateRightThumbValue:;
- (void)updateProgressValue:;
- (void)setValChangeBlock:;
- (id)initWithLeftThumb:rightThumb:;
- (void)setSlideMinValue:;
- (id)valChangeBlock;
- (id)rectView;
- (id)leftThumb;
- (double)transformThumbValueToActiveX:;
- (double)transformValueToActiveWidth;
- (id)leftThumbImageView;
- (double)transformThumbValueToThumbX:;
- (id)rightThumbImageView;
- (id)rightThumb;
- (void)updateValueLabelForLeftThumb:;
- (void)updateValueLabelForRightThumb:;
- (double)exactValue;
- (void)sendActionBeganSlideForThumb:;
- (void)updateLeftThumb:;
- (void)sendActionEndSlideForThumb:;
- (void)updateRightThumb:;
- (double)thumbMinMargin;
- (double)transformThumbXToThumbValue:;
- (double)slideMinValue;
- (void)updateValueLabel:value:expectToHidden:;
- (void)setRectView:;
- (void)leftThumbPanGesture:;
- (void)setLeftThumbImageView:;
- (void)rightThumbPanGesture:;
- (void)setRightThumbImageView:;
- (double)value;
- (id)delegate;
- (id)progressView;
- (id)intrinsicContentSize;
- (void)addObserver;
- (BOOL)disabled;
- (void)setDisabled:;
- (void)setMaxValue:;
- (double)minValue;
- (void)setMax:;
- (void)setProgressView:;
- (void)setTitleLabel:;
- (id)sliderView;
- (void)setMinValue:;
- (void).cxx_destruct;
- (void)setSliderView:;
- (id)title;
- (id)hitTest:withEvent:;
- (id)titleLabel;
- (double)total;
- (void)setDelegate:;
- (void)layoutSubviews;
- (double)max;
- (double)maxValue;
- (void)setTitle:;
- (double)min;
- (void)setMin:;
- (void)setValueLabel:;
- (id)valueLabel;
- (void)setupUI;
- (id)activeView;
- (void)setActiveView:;
@end
