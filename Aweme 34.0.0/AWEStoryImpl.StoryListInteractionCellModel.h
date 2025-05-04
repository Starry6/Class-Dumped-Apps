@interface AWEStoryImpl.StoryListInteractionCellModel : AWEStoryImpl.StoryListPostCellModel
- (void)onThemeChanged;
- (void)didFinishSetRemarkWithUser:;
- (void)likeAwemeNotificationHandler:;
- (void)diggCountUpdateNotificationHandler:;
- (void)didChangeAwemePrivacyType:privacyPermissionType:extra:syncHandle:;
- (void)dealloc;
- (void).cxx_destruct;
@end
