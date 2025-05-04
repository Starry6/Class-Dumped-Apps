@interface AWELocalAudioExportAlbumPreviewBottomView : UIView
@property (nonatomic) UIButton selectPhotoButton;
@property (nonatomic) UILabel selectHintLabel;
@property (nonatomic) UIButton nextButton;
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
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
- (void).cxx_destruct;
- (id)nextButton;
- (void)setNextButton:;
@end
