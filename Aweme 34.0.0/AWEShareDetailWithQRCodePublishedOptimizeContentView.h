@interface AWEShareDetailWithQRCodePublishedOptimizeContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UIImageView playIconView;
@property (nonatomic) UIView textContainerView;
- (id)imageToSaveToAlbum;
- (id)playIconView;
- (void)setPlayIconView:;
- (id)contentToSaveSize;
- (id)saveImageSize;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (void)fetchImageWithContext:animated:completion:;
- (void)updateCoverImage:animated:;
- (id)properSaveContentSizeWithImage:;
- (id)properContentSizeWithImage:;
- (void)setCoverImageWithProperCropping:;
- (id)properPreviewCoverImageSizeWithImage:;
- (id)properSaveCoverImageSizeWithImage:;
- (id)properPreviewCoverImageSizeWithHeight:width:;
- (id)properSaveCoverImageSizeWithHeight:width:;
- (void)updateLabelsWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)setTextContainerView:;
- (id)textContainerView;
- (id)contentViewSize;
- (void)setTemplateModel:;
@end
