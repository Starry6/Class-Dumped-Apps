@interface AWEVideoDraftBoxEmptyView : UIView
@property (nonatomic) UIButton cameraButton;
@property (nonatomic) UIImageView cameraImageView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)tipsLabel;
- (void)buttonClicked;
- (void)setTipsLabel:;
- (id)cameraImageView;
- (void)setCameraImageView:;
- (id)init;
- (void)dismiss;
- (id)cameraButton;
- (void).cxx_destruct;
- (void)setCameraButton:;
- (void)setupUI;
@end
