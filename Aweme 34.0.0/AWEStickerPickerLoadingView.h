@interface AWEStickerPickerLoadingView : AWEStickerPickerOverlayView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView loadingImageView;
- (void)updateCenterOffset:;
- (void)updateLoadingText:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)loadingImageView;
- (void)setLoadingImageView:;
@end
