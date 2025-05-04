@interface AWEPlayInteractionDescriptionElementViewModel : AWEPlayInteractionBaseElementViewModel
@property (nonatomic) <AWESearchPredictFetchProtocol> searchViewController;
- (void)onAdDescriptionClicked:url:range:;
- (void)onDescriptionLabelClicked:url:;
- (id)splitScreenController;
- (void)onAdDescriptionTagClicked;
- (void)onDescriptionLabelClicked:url:extraInfo:;
- (void)simplyLiveRoomPathActionWithRoomID:userID:;
- (void)interactor_onDescriptionLabelClicked:url:;
- (void)router_onDescriptionLabelClicked:url:;
- (void)touchBeganForSearchViewControllerURL:;
- (void)touchCancelForSearchViewController;
- (void)interactor_onDescriptionLabelClicked:url:extraInfo:;
- (id)getTagIdForHashtag:;
- (id)getTrendingTopicForHotSpotTag;
- (void)onAdDescriptionClickedWithAttributeString:url:range:;
- (id)searchViewController;
- (void)setSearchViewController:;
- (void).cxx_destruct;
@end
