@interface AWEOpenShareIMService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)joinIMGroupWithGroupID:clientKey:openID:completion:;
+ (void)joinIMGroupWithGroupID:clientKey:openID:isHalfPage:extraDict:completion:;
+ (void)openChatPageWithCid:openID:clientKey:isHalfPage:extraDict:completion:;
+ (void)openAddGroupHalfPageWithDecodedGroupID:GroupID:ownerID:clientKey:groupType:openID:extraDict:completion:;
+ (void)openAddGroupFullPageWithDecodedGroupID:GroupID:ownerID:clientKey:groupType:openID:extraDict:completion:;
+ (void)trackEndWithClientKey:withParams:;
@end
