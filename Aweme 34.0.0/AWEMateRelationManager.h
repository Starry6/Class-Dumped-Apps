@interface AWEMateRelationManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)applyMate:;
+ (void)approveMate:completion:;
+ (id)imageWithClipImage:;
+ (void)configureRelationSheetContext:params:;
+ (void)p_showApplyMate:;
+ (void)p_prepareSheetContext:completion:;
+ (void)trackMateRelationPanel:trackParams:actionType:user:;
+ (void)removeMateUser:scene:completion:;
+ (void)trackFriendCancel:trackParams:user:;
+ (void)showMateRelation:operateType:trackParams:primaryClickBlock:secondryClickBlock:;
+ (id)titleTextWithOperateType:nickname:;
+ (id)detailTextWithOperateType:;
+ (id)primaryButtonTextWithOperateType:;
+ (void)p_getGroupName:timeout:completion:;
+ (void)removeMateWithUnFollow:scene:trackParams:unfollowBlock:;
+ (void)removeFansAndRemoveMate:trackParams:removeFansBlock:;
+ (void)unfollowAndRemoveMate:trackParams:unfollowBlock:;
+ (void)blockUserAndRemoveMate:scene:trackParams:blockUserBlk:;
@end
