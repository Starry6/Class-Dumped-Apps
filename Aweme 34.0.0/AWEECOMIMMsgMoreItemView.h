@interface AWEECOMIMMsgMoreItemView : UIView
@property (nonatomic) UIImageView gradientView;
@property (nonatomic) UIView buttonContainerView;
@property (nonatomic) AWEECOMIMCustomButton foldedButton;
@property (nonatomic) <AWEECOMIMMsgMoreItemViewDelegate> delegate;
@property (nonatomic) Q type;
- (id)foldedButton;
- (id)createImageWithMaskLayerColors:;
- (void)foldedButtonAction:;
- (void)setFoldedButton:;
- (void)foldedButtonSetOfflineImage:;
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
