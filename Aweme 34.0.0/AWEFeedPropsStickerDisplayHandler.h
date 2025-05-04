@interface AWEFeedPropsStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) AWEInteractionExtraModel extraModel;
@property (nonatomic) NSArray locationModels;
- (id)extraModel;
- (void)setExtraModel:;
- (BOOL)canHandleTapAtPoint:;
- (id)getPropParams;
- (id)locationModels;
- (id)p_currentLocationModel;
- (id)p_locationInContainer:;
- (void)trackPropsStickerClick;
- (void)handlePropsBubbleClicked;
- (void)stickerFunctionTracker:label:url:;
- (id)adTasks;
- (void)trackBubbleClickWithAdTaskType:;
- (void)old_handlePropsBubbleClicked;
- (BOOL)adValid;
- (void)setLocationModels:;
- (void).cxx_destruct;
- (void)handleTapAtPoint:;
- (void)willDisplay;
+ (BOOL)canDisplaySticker:;
@end
