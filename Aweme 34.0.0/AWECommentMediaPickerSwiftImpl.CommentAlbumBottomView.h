@interface AWECommentMediaPickerSwiftImpl.CommentAlbumBottomView : UIView
@property (nonatomic) BOOL doAnimation;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton selectPhotoButton;
@property (nonatomic) UILabel selectHintLabel;
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) UIButton nextButton;
- (BOOL)doAnimation;
- (void)setDoAnimation:;
- (id)selectPhotoButton;
- (void)setSelectPhotoButton:;
- (id)selectHintLabel;
- (void)setSelectHintLabel:;
- (void)updateSelectPhotoStatus:;
- (void)updateNextButtonStatus:;
- (void)updatePhotoSelected:greyMode:;
- (void)updateRepeatSelected:greyMode:;
- (id)effectView;
- (id)initWithFrame:;
- (void)setEffectView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithCoder:;
- (id)nextButton;
- (void)setNextButton:;
@end
