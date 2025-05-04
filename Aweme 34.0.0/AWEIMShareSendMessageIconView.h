@interface AWEIMShareSendMessageIconView : UIView
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) UIImageView beforeSendImageView;
@property (nonatomic) UIImageView afterSendImageView;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) double imageWH;
- (void)updateSelected:animated:;
- (void)setImageWH:;
- (id)beforeSendImageView;
- (double)imageWH;
- (id)afterSendImageView;
- (void)updateUIForEnlargeAvatar;
- (void)updateSelectStatus:;
- (void)setBeforeSendImageView:;
- (void)setAfterSendImageView:;
- (id)init;
- (void)setShapeLayer:;
- (id)shapeLayer;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateBackgroundColor:;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
