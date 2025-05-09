@interface AWEMVCardUtils : NSObject
+ (BOOL)isLiveCard:;
+ (id)formateDuration:;
+ (BOOL)isLongVideo:;
+ (id)titleWithAwemeModel:;
+ (BOOL)isLandscapeVideo:;
+ (BOOL)isFakeLandscapeVideo:;
+ (BOOL)isPortraitVideo:;
+ (BOOL)isPlaylet:;
+ (BOOL)isLargeCard:;
+ (BOOL)isAlbum:;
+ (id)countStrForNum:type:;
+ (BOOL)isSmallBanner:;
+ (BOOL)isLiveScene:;
+ (BOOL)isSmallCardLiveScene:;
+ (BOOL)isPaidLiveScene:;
+ (id)liveRoomStatusWithModel:;
+ (BOOL)isVSScene:;
+ (BOOL)isLargeBanner:;
+ (BOOL)enableForPad;
+ (BOOL)isAppointment:;
+ (BOOL)isReplayCard:;
+ (BOOL)isSvrLargeCard:;
+ (BOOL)hasLargeCardUrl:;
+ (BOOL)isLargeCardLandscapeCover:;
+ (void)updateCardConfigRightBottomActionWithModel:config:;
+ (BOOL)isLiveRoom:;
+ (BOOL)isReplay:;
+ (BOOL)isSmallCardReplay:;
+ (BOOL)isSmallCardLiveRoom:;
+ (BOOL)isVSLiveMergeLive:;
+ (BOOL)isVSLiveMergePremiere:;
+ (BOOL)isHorizontalLiveCard:;
+ (BOOL)isValidLargeCard:;
+ (BOOL)isSmallCard:;
+ (BOOL)isMixVideo:;
+ (BOOL)isMixAlbum:;
+ (void)createCardConfigIfNeeded:;
+ (void)createLiveCardConfigIfNeeded:;
+ (BOOL)isVerticalSmallCardLiveRoom:;
+ (BOOL)isHorizontalSmallCardLiveRoom:;
@end
