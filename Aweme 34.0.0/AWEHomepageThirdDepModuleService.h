@interface AWEHomepageThirdDepModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createSideBarRecentVisitUserViewControllerWithUserID:title:referString:latestVideo:hasMoreUser:pageHandler:logExtraDict:willDisappearBlock:;
- (id)createSideBarRecentVisitUserListPageHandlerWithUserList:;
- (id)getSideBarRevisitUserCacheManager;
@end
