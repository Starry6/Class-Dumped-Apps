@interface AWEShareDetailWithQRCodeCloseFriendContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) NSString userID;
@property (nonatomic) UIView textContainerView;
- (id)imageToSaveToAlbum;
- (id)saveImageSize;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (id)userID;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setUpSubviews;
- (void)setTextContainerView:;
- (id)textContainerView;
- (id)contentViewSize;
@end
