@interface AWEDCFeedCellImageElementGenreResourceLiveView : UIView
@property (nonatomic) LOTAnimationView livingIcon;
@property (nonatomic) AWEGradientView livingIconContainerView;
@property (nonatomic) UILabel livingIconLabel;
@property (nonatomic) double iconWidthHeight;
@property (nonatomic) double labelFont;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (void)setIconWidthHeight:;
- (double)iconWidthHeight;
- (id)livingIconContainerView;
- (id)livingIconLabel;
- (id)livingIcon;
- (id)livingLabelSize;
- (double)livingLabelFontSize;
- (id)livingLabelText;
- (void)setLivingIcon:;
- (void)setLivingIconContainerView:;
- (void)setLivingIconLabel:;
- (void)setLabelFont:;
- (double)labelFont;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)setupUI;
@end
