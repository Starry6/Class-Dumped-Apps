@interface AWEConcernSpecialFollowTracker : NSObject
+ (id)stringFromEntrancePosition:;
+ (void)trackSpecialFollowPopupWithActionType:;
+ (void)trackSpecialFollowToastShowWithText:;
+ (void)trackSpecialFollowUserID:enterFrom:entrancePosition:followPanelPosition:logExtra:;
+ (void)trackSpecialFollowCancelUserID:enterFrom:entrancePosition:followPanelPosition:logExtra:;
+ (void)trackSpecialFollowEntranceShowWithUserID:enterFrom:entrancePosition:followPanelPosition:;
+ (unsigned long long)followPanelPostionFromMenuShowMethod:;
+ (id)stringFromFollowPanelPosition:;
+ (id)stringFromActionType:;
@end
