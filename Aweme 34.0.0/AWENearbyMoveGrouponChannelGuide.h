@interface AWENearbyMoveGrouponChannelGuide : NSObject
@property (nonatomic) AWEAlertNearbyFirstMoveGuideEvent event;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:onClose:;
- (id)takeSnapshotOfScreenRect:;
- (void)setEvent:;
- (void).cxx_destruct;
- (id)event;
+ (void)cancelUnshowGuide;
+ (void)didFullScreenVCAppearOnce;
+ (BOOL)isFullScreenTransformerRenderCompleted;
+ (void)updateFullScreenTransformerRenderResult:;
+ (void)updateSkyLightOpenTimes;
+ (void)trackFirstGuideShowResult:;
+ (void)tryPresentChannelGuideWithCanShowBlk:beginShowBlk:jumpBlk:dismissBlk:animationBeginBlk:trackParams:transformerOfflineType:;
+ (BOOL)isMoveGuideViewShowing;
+ (long long)skyLightOpenTimes;
+ (void)isFirstGuideSettingDataFromCache:;
@end
