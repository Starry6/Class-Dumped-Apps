@interface AWEIMMixPhotoRequestManager : NSObject
- (id)syncMessageTask:conversationShortID:serverMessageID:updateTime:status:slotNumber:;
- (id)requestStartMixPhotoWithContext:;
- (id)requestEndMixPhotoWithContext:;
- (id)requestJoinMixPhotoWithContext:actionType:;
- (id)p_requestWithActionType:context:;
- (id)p_requestMixPhotoWithParams:;
- (id)requestReflowMixPhotoWithContext:;
- (id)syncMessageTask:conversationShortID:serverMessageID:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
