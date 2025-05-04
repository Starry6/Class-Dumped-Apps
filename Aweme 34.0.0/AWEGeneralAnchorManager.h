@interface AWEGeneralAnchorManager : NSObject
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)generalCodeInsertWithObject:;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (id)insertCodeInAWEStudioUIWithObject:;
+ (id)insertCodeInAWEStudioJumpWithObject:;
+ (id)insertCodeInAWEFeedBulletWithObject:;
+ (id)insertCodeInAWEFeedMonitorWithObject:;
+ (id)insertCodeInAWEFeedAnchorShowTrackWithObject:;
+ (id)insertCodeInAWEFeedAnchorClickBTMTrackWithObject:;
+ (id)insertCodeInAWEFeedJumpActionWithObject:;
+ (id)insertCodeInAWECommentJumpActionWithObject:;
+ (id)insertCodeInAWECommentAnchorShowTrackWithObject:;
+ (id)insertCodeInAWECommentAnchorClickTrackWithObject:;
+ (void)trackAnchorShowWithObject:withCarrierType:;
+ (void)trackAnchorClickWithObject:withCarrierType:;
+ (id)sourceBtmTokenWithObject:BtmInfo:;
@end
