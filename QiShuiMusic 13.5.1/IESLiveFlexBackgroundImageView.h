@interface IESLiveFlexBackgroundImageView : IESLiveImageView
@property (nonatomic) <IESLiveFlexImage> bgFlexImage;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSArray flexSetting;
@property (nonatomic) NSArray textSetting;
- (void)setBgFlexImage:;
- (void)setFlexSetting:;
- (void)setTextSetting:;
- (id)bgFlexImage;
- (id)flexSetting;
- (id)p_imageWithFlexSetting:image:;
- (void)p_updateLayoutWithTextFlexSetting:;
- (void)setImage:flexSetting:textSetting:;
- (void)setUI;
- (id)textSetting;
- (id)containerView;
- (void)setContainerView:;
- (void)setImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
