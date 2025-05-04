@interface AWEStudioMusicViewBuilderImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildFeedbackEntranceViewWithIcon:iconSize:normalText:normalTextColor:highlightText:highlightTextColor:fontSize:highlightTapAction:;
- (id)searchLynxCollectMusicNotification;
- (id)searchLynxShootNotification;
- (id)searchLynxAudioPlayNotification;
- (id)searchLynxEditMusicNotification;
- (double)heightForDynamicMusicCollectionCellWithData:;
- (id)cellForDymaicMusicCollectionCellWithData:tableView:delegate:;
- (void)tableViewCellsTriggerAppear:;
- (void)tableViewCellsTriggerDisappear:;
- (void)tableViewCellTriggerShow:;
- (void)tableViewCellTriggerHide:;
- (id)router_pathComponentArrayOfSchema:;
- (void)transitionWithURLString:completion:;
- (void)transitionWithURLString:appendQuires:completion:;
- (id)cellForDymaicMusicCollectionCellWithData:tableView:indexPath:delegate:;
@end
