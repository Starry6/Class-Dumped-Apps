@interface AWEStoryImpl.StoryModuleService : HTSService
- (id)tabService;
- (id)feedViewControllerWithContext:;
- (BOOL)enableWaterfall;
- (id)listService;
- (BOOL)isWaterfallFamiliarFeedRefer:;
- (BOOL)isWaterfallFamiliarOuterFeedRefer:;
- (BOOL)isWaterfallFamiliarDetailRefer:;
- (BOOL)isPublishSuccessWithWaterfallGuideSnackBarWithPublishTask:;
- (BOOL)is24StoryWith:;
- (id)waterfallFamiliarVideoDetailWithAwemeID:;
- (BOOL)isStoryDetailTransition;
- (id)createAnimatedNumberViewWithFont:;
- (id)init;
@end
