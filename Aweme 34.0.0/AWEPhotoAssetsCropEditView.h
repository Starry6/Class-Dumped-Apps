@interface AWEPhotoAssetsCropEditView : AWEAssetsCropEditBaseView
@property (nonatomic) UIImageView videoImageView;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) {CGSize=dd} videoImageSize;
@property (nonatomic) AWEAssetsCropAndClipViewModel viewModel;
@property (nonatomic) NSURL imageFileURL;
- (id)videoImageView;
- (void)setVideoImageView:;
- (void)refreshFrame;
- (void)setVideoImageSize:;
- (id)videoImageSize;
- (id)initWithFrame:fragment:viewModel:;
- (double)limitYWithHeight:;
- (id)contentSizeWithUpdate:;
- (id)assetContentView;
- (id)initWithFrame:fragment:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)hintLabel;
- (id)imageFileURL;
- (void)setHintLabel:;
- (void)setImageFileURL:;
- (double)expectedHeight;
@end
