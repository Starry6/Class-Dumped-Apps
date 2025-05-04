@interface AWESearchIconImageView : AWEEcomSearchWebImageView
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString mainPictureLabel;
@property (nonatomic) <AWESearchIconImageViewProtocol> searchIconImageViewDelegate;
- (id)jumpSchema;
- (void)setJumpSchema:;
- (id)mainPictureLabel;
- (void)setMainPictureLabel:;
- (void)tagImageTapped:;
- (id)searchIconImageViewDelegate;
- (void)bindJumpEventWithSchema:;
- (void)setSearchIconImageViewDelegate:;
- (void).cxx_destruct;
@end
