@interface AWEPublishAlbumManager : NSObject
@property (nonatomic) BOOL currentState;
@property (nonatomic) AWEVideoPublishViewModel model;
- (void)userClickButtonWithCompletion:;
- (void)p_checkAlbumPermissionWithCompletion:;
- (void)checkAlbumPermissionWithCompletion:;
- (void)setModel:;
- (void)setCurrentState:;
- (id)initWithModel:;
- (id)model;
- (BOOL)currentState;
- (void).cxx_destruct;
+ (BOOL)businessEnableSaveWithModel:;
+ (BOOL)defaultStateForModel:;
+ (BOOL)shouldShowSaveAlbumItemForModel:;
+ (BOOL)systemEnable;
+ (BOOL)buttonStateForModel:;
+ (BOOL)albumStateForModel:;
+ (void)setButtonStateForModel:;
+ (void)setAlbumState:forModel:;
+ (void)showPhotoLibraryPermissionAlertWithCompletion:;
@end
