@interface AWELiveShareHelper : NSObject
+ (void)shareWithInsideType:contentModel:roomModel:;
+ (void)fetchQRCodeImageWithType:itemID:completion:;
+ (void)updateLiveShareUserListStore;
+ (id)liveShareUserAndGroupListInStore;
+ (void)openChatChannel:withHeight:cornerRadii:showRecommond:fetchModel:clickHandler:inviteInfo:shareUsersBlock:dismissBlock:showBlock:;
+ (void)inviteFriendsToJoinChatChannelV2:inviteId:roomType:users:context:;
+ (id)getShareModelWithRoom:shareContent:;
+ (void)showSharePanelWithContentModel:roomModel:onViewController:;
+ (void)showPreLiveSharePanelWithContentModel:roomModel:onViewController:;
+ (void)shareLandscapeLiveWithContent:roomModel:withType:;
+ (BOOL)checkShareChannelAvailable:needToast:;
+ (void)spliceImageShareWithModel:content:fromController:dismissBlock:;
+ (void)openLiveBoardWithModel:content:fromController:dismissBlock:;
+ (id)shareUserListStoreKey;
+ (void)addTrackParamsToContentModel:;
+ (void)adjustMappedRoom:withShareContent:;
+ (id)livesdkShareEventPageWithType:;
+ (id)livesdkShareContentWithType:;
+ (id)chatChannelMessageSchema:roomModel:;
+ (id)getParamsWithSharedUsers:;
@end
