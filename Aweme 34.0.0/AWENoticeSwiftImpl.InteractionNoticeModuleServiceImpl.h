@interface AWENoticeSwiftImpl.InteractionNoticeModuleServiceImpl : HTSService
- (id)getInteractNoticeGroupManager;
- (long long)getVideoCoverStateWithAwemeModel:;
- (id)getNewInteractionNoticeViewController;
- (void)setupSubCategoryCache;
- (void)clearAllNoticeListCache;
- (id)getUnreadMarkDisplayedStorage;
- (id)init;
@end
