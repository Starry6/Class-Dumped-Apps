@interface AWEFeedQuickFlashDisplayHandler : AWEFeedBasicStickerDisplayHandler
@property (nonatomic) UIView<ACCStickerContentProtocol><ACCQuickFlashStickerViewProtocol> contentView;
@property (nonatomic) UIViewController<AWEFeedQuickFlashFullPageViewControllerProtocol> quickFlashFullPageVC;
@property (nonatomic) AWEFeedQuickFlashPanelStyleConfig styleConfig;
@property (nonatomic) DUXPopover bubbleView;
@property (nonatomic) <AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)trackShowIfNeeded;
- (void)setStyleConfig:;
- (id)styleConfig;
- (BOOL)isValidTemplateVideoWithDefinition:duration:;
- (id)generateTemplateVideoInfoData:;
- (BOOL)displayByNative;
- (BOOL)canHandleTapAtPoint:;
- (void)displaySticker:;
- (BOOL)shouldFixLocation;
- (void)longPressAtPoint:;
- (BOOL)isFlashbackChallenge;
- (void)jumpToFlashbackWithTrackInfo:;
- (BOOL)shouldJumpToFlashback;
- (void)quickFlashFullPageClicked;
- (void)trackInfoWithEvent:Model:;
- (void)p_dismissBubble;
- (void)setQuickFlashFullPageVC:;
- (id)quickFlashFullPageVC;
- (void)fetchFullPageModelListWithPreload:;
- (BOOL)hasSameTopicWithAwemeModel:;
- (id)init;
- (void)dealloc;
- (void)setPanelController:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)panelController;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)handleTapAtPoint:;
+ (void)showFullPageViewWithStyleConfig:stickerModel:awemeModel:enterFrom:logExtraDict:activityDic:trackContext:delegate:;
+ (BOOL)canDisplaySticker:;
+ (id)generateWrapperModelList:;
+ (id)modelsByArray:styleConfig:;
+ (BOOL)isQuickFlashSticker:;
+ (void)joinQuickFlashWithSticker:awemeModel:enterFrom:logExtraDict:;
+ (id)filterAllAwemeModels:;
@end
