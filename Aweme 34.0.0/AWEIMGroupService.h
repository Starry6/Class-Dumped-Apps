@interface AWEIMGroupService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getConversationInfoWithConversationID:completionBlock:;
- (Class)radarGroupCommandVCClass;
- (Class)radarGroupConfirmVCClass;
- (void)showShareCopyViewControllerWithText:customTitle:hideSubtitle:customSubtitle:useSimplifyStyle:context:;
- (id)radarGroupCommandViewControllerWithGroupId:enterType:enterFrom:enterMethod:;
- (id)radarGroupNoticeList;
+ (void)createGroupWithConfiguration:;
@end
