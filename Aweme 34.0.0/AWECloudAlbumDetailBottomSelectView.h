@interface AWECloudAlbumDetailBottomSelectView : UIView
@property (nonatomic) ACCButton publishButton;
@property (nonatomic) ACCButton localSaveButton;
@property (nonatomic) ACCButton deleteButton;
@property (nonatomic) <AWECloudAlbumDetailBottomSelectViewDelegate> delegate;
- (id)publishButton;
- (void)setPublishButton:;
- (void)updateWithSelectedCount:saveEnable:;
- (void)onPublishButtonAction:;
- (void)onLocalSaveButtonAction:;
- (void)setLocalSaveButton:;
- (void)onDeleteButtonAction:;
- (id)localSaveButton;
- (void)setDeleteButton:;
- (id)delegate;
- (id)initWithFrame:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
