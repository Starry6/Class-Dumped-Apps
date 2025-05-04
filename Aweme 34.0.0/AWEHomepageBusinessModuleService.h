@interface AWEHomepageBusinessModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)newVersionFeedbackIsShowOnRecommendFeedPage;
- (void)updateNewVersionFeedbackViewHidden:;
- (id)getChannelManagerPreDispatchPluginControllersWithChannelController:;
- (id)getChannelManagerPostDispatchPluginControllersWithChannelController:;
@end
