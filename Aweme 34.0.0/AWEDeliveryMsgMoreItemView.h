@interface AWEDeliveryMsgMoreItemView : UIView
@property (nonatomic) UIImageView gradientView;
@property (nonatomic) UIView buttonContainerView;
@property (nonatomic) AWEDeliveryCustomBtn foldedButton;
@property (nonatomic) <AWEDeliveryMsgMoreItemViewDelegate> delegate;
@property (nonatomic) Q type;
- (id)foldedButton;
- (id)createImageWithMaskLayerColors:;
- (void)foldedButtonAction:;
- (void)setFoldedButton:;
- (id)gradientView;
- (id)delegate;
- (id)initWithFrame:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setDelegate:;
- (id)buttonContainerView;
- (void)setButtonContainerView:;
@end
