@interface CommerceShopHelperImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)openGoodsGuideOnViewcontroller:entryPage:completionBlock:;
+ (void)openMyOrdersPage;
+ (void)openShopReputationDetailPageWithSecAuthorId:enterSource:followStatus:authorId:;
+ (id)profileOrdersTitle;
+ (void)shareWithShopContext:onViewController:;
+ (void)shareWithShopOwner:onViewController:;
@end
