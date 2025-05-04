@interface AWEFriendsImpl.StoryVideoContentSectionController : AWEFriendsImpl.VideoContentSectionController
- (void)configCell:index:model:;
- (BOOL)forceDisableVideoViewUp;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)init;
+ (Class)sectionViewModelClass;
@end
