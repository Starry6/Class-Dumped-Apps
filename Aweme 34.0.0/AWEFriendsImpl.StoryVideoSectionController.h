@interface AWEFriendsImpl.StoryVideoSectionController : AWEFriendsImpl.VideoSectionController
- (void)configCell:index:model:;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (id)init;
+ (Class)sectionViewModelClass;
@end
