@interface AWEConcernLiveSkylightTrack : NSObject
+ (void)trackShowAvatarAtIndexPath:pageType:cellModel:skylightView:;
+ (id)trackParamsWithModel:enterFrom:enterMethod:isTrackerUnified:;
+ (id)requestIDWithRoomModel:;
+ (void)trackSkylightCellAtIndex:moduleIndex:event:pageType:cellNumber:cellModel:;
+ (void)trackSkylightStickyUnreadViewWithEvent:model:;
+ (void)trackCloseSkylightByClick:;
+ (void)trackShowSkylightWithActionMethod:actualLiveCount:cellCount:skylightCellListStr:hasSpecialFollow:;
+ (void)trackRefreshSkylightByAuto:;
+ (void)trackRefreshSkylightLiveWithType:;
+ (void)trackShowAvatarAtIndexPath:pageType:cellModel:;
@end
