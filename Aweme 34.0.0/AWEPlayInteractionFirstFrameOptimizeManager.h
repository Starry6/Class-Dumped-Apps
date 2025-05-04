@interface AWEPlayInteractionFirstFrameOptimizeManager : NSObject
@property (nonatomic) NSDictionary firstFrameHideButtonConfig;
@property (nonatomic) NSDictionary firstFrameHideBarConfig;
- (BOOL)shouldHideButtonOnFirstFrameVideoBeforeSetData:referString:;
- (void)setFirstFrameHideBarConfig:;
- (void)setFirstFrameHideButtonConfig:;
- (unsigned long long)hideBottomBarStrategy;
- (BOOL)shouldHideBottomBarOnFirstFrameVideo:referString:;
- (id)bottomBarAfterSetDataWhiteList;
- (BOOL)enableHideBottomBarOnFirstFrameVideo;
- (id)firstFrameHideBarConfig;
- (unsigned long long)hideButtonStrategy;
- (BOOL)shouldHideButtonOnFirstFrameVideo:referString:;
- (id)buttonAfterSetDataWhiteList;
- (BOOL)enableHideButtonOnFirstFrameVideo;
- (id)firstFrameHideButtonConfig;
- (BOOL)shouldHideBottomBarOnFirstFrameVideoBeforeSetData:referString:;
- (BOOL)shouldHideBottomBarOnFirstFrameVideoAfterSetData:referString:identifier:;
- (BOOL)shouldHideButtonOnFirstFrameVideoAfterSetData:referString:className:;
- (void).cxx_destruct;
- (BOOL)isFirstPlay;
+ (id)sharedManager;
@end
