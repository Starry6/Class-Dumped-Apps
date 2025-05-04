@interface AWEStoryImpl.StoryListService : HTSService
- (id)listViewControllerWithEnterFrom:enterMethod:referString:;
- (unsigned long long)reloadListViewControllerTimeThreshold;
- (id)clipVideoFrameForVideoSize:inContainerViewBounds:withAlbumContentMode:;
- (void)setEnterWaterfallDetailFlag:;
- (BOOL)getEnterWaterfallDetailFlag;
- (id)init;
- (id)listViewController;
@end
