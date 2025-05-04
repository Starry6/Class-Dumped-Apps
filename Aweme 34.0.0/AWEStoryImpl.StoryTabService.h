@interface AWEStoryImpl.StoryTabService : HTSService
@property (nonatomic) AFDFrequencyCountRule momentMigrationFrequencyRule;
- (id)tabContainerViewControllerWithUserModel:;
- (id)momentTabContainerViewControllerWithUserModel:;
- (void)updateStoryFeedEnterFrom:;
- (id)queryStoryFeedEnterFrom;
- (id)storyFeedTrackingParamsWithAwemeModel:;
- (BOOL)shouldRemoveCameraComponentWithDetailType:;
- (id)momentMigrationFrequencyRule;
- (id)init;
- (void).cxx_destruct;
@end
