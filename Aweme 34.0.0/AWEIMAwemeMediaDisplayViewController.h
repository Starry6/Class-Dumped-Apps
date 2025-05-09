@interface AWEIMAwemeMediaDisplayViewController : UIViewController
@property (nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> longPressVC;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) <AWEIMFeedVideoQuickReplayProtocol> imBottomInputbar;
@property (nonatomic) AWEIMLongPressIMAwemeManager imLongPressManager;
@property (nonatomic) AWEIMMessageEmojiAnimator animator;
@property (nonatomic) UIView imBottomInputbarView;
@property (nonatomic) UIView bottomGradientView;
@property (nonatomic) @? pureModeBlock;
@property (nonatomic) @? innerScrollViewEndDecelerating;
@property (nonatomic) @? innerScrollViewDidSingleTap;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) UITapGestureRecognizer doubleTapGesture;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setExtraParams:;
- (void)setPureModeBlock:;
- (id)pureModeBlock;
- (id)extraParams;
- (void)cellDidEndDisplay:;
- (id)transitionEndView;
- (id)innerScrollViewDidSingleTap;
- (void)setInnerScrollViewDidSingleTap:;
- (id)innerScrollViewEndDecelerating;
- (void)setInnerScrollViewEndDecelerating:;
- (BOOL)transitionEndViewAvailable;
- (void)onPressDownLoad;
- (void)showLongPressPanelWithExtraParams:;
- (BOOL)longPressModuleViewEnable;
- (BOOL)isShowingPublishDailyStoryGuide;
- (id)longPressVC;
- (void)setLongPressVC:;
- (id)imBottomInputbarView;
- (id)imBottomInputbar;
- (void)setImBottomInputbar:;
- (void)setImBottomInputbarView:;
- (id)albumImagePickerViewController;
- (void)setDoubleTapGesture:;
- (id)initWithExtraParams:;
- (void)setDownloadVM:;
- (id)downloadVM;
- (void)p_MediaDisplayDoubleClick:;
- (void)p_willTriggerLongPress:;
- (id)imageResourceDownloadModel;
- (id)largeImageResourceDownloadModel;
- (void)downloadImageResourceWithImageResource:start:progress:finish:;
- (BOOL)doubleTapLikeEnabled;
- (void)p_longPressPanelWillShow;
- (id)imLongPressManager;
- (id)p_longPressContextWithExtraParams:;
- (void)p_longPressPanelWillDismiss;
- (void)onPressAddToCustom;
- (void)p_onPressShareModel:;
- (BOOL)p_checkUserSendMessagePrivilegeWithShareModel:;
- (void)p_replyShareWithContent:;
- (void)p_hideFastReplyView:animated:;
- (void)showPublishDailyStoryGuideIfNeeded;
- (void)addDoubleClickGestureOn:;
- (void)addLongPressGestureOn:;
- (void)cancelDownloadOriginImage;
- (void)downloadLargeImageResourceStart:progress:finish:;
- (void)downloadImageResourceStart:progress:finish:;
- (void)__impact;
- (void)_playLikeAnimationOnLocation:;
- (void)p_addDownloadIn:;
- (void)p_addAddToCustom:;
- (void)p_addFirendsListWith:inModels:;
- (void)p_addMoreFirendIn:;
- (void)p_addPageIdentifierForTranspondIMShareModels:;
- (void)setImLongPressManager:;
- (id)animator;
- (void)viewWillDisappear:;
- (void)play;
- (id)message;
- (void)setAnimator:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)doubleTapGesture;
- (void)setMessage:;
- (void)prepareWithCompletion:;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
+ (void)p_trackAddEmoji;
@end
