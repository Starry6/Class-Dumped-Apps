@interface AWERecorderTipsAndBubbleManager : NSObject
@property (nonatomic) AWEVideoHintView filterHint;
@property (nonatomic) AWEVideoHintView zoomScaleHintView;
@property (nonatomic) UIView musicBubble;
@property (nonatomic) UIView duetWithPropBubble;
@property (nonatomic) AWEStickerHintView propHintView;
@property (nonatomic) AWEStickerHintView propPhotoSensitiveView;
@property (nonatomic) @? showMomentGuideAnimationCompletion;
@property (nonatomic) UIView albumNewContentBubbleView;
@property (nonatomic) UIImageView albumNewContentBubbleImageView;
@property (nonatomic) UILabel albumNewContentBubbleLabel;
@property (nonatomic) UIView albumNewContentBubble;
@property (nonatomic) UIView recognitionBubble;
@property (nonatomic) CAKAlbumAssetModel showingAssetModel;
@property (nonatomic) NSString albumNewContentBubbleType;
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) q actureRecordBtnMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeBubbleAndHintIfNeeded;
- (id)propHintView;
- (void)removeDuetGreenScreenPropHintView;
- (void)removePropPhotoSensitive;
- (void)showPropPhotoSensitiveWithContainer:effect:dismissBlock:;
- (void)removeZoomScaleHintView;
- (void)removePropHint;
- (BOOL)isPropHintViewShowing;
- (void)showPropHintWithPublishModel:container:effect:;
- (void)showFilterHintWithContainer:filterName:categoryName:centerInContainer:;
- (void)showRecognitionBubbleWithInputData:forView:titleStr:contentStr:loopTimes:showedCallback:;
- (BOOL)hasCameraAndMicroPhoneAuth;
- (void)showZoomScaleHintViewWithContainer:zoomScale:isGestureEnd:;
- (void)setPropHintView:;
- (BOOL)shouldShowAddFeedMusicView;
- (void)setActureRecordBtnMode:;
- (long long)actureRecordBtnMode;
- (id)zoomScaleHintView;
- (void)setZoomScaleHintView:;
- (id)filterHint;
- (void)setFilterHint:;
- (void)updateFilterHintNewUIStyleSameWithEditPage;
- (void)removefilterHint;
- (void)createScaleHintView:;
- (void)updateScaleHintViewWithAnimation:;
- (void)removeMusicBubble;
- (void)setMusicBubble:;
- (id)musicBubble;
- (void)handleDuetGreenScreenPropHintViewWithEffectModel:;
- (id)propPhotoSensitiveView;
- (void)setPropPhotoSensitiveView:;
- (void)propPhotoSensitiveViewAutoDismissAfterSecond:dismissBlock:;
- (id)recognitionBubble;
- (void)p_showRecognitionBubbleForView:titleStr:contentStr:loopTimes:completion:;
- (void)shouldShowRecognitionBubble:completion:;
- (void)removeRecognitionBubble:;
- (void)setRecognitionBubble:;
- (void)shouldShowRecognitionItemBubble:completion:;
- (void)setShowMomentGuideAnimationCompletion:;
- (id)albumNewContentBubbleView;
- (id)albumNewContentBubbleImageView;
- (id)albumNewContentBubbleLabel;
- (id)albumNewContentBubble;
- (void)showMusicTimeBubbleWithPublishModel:forView:bubbleStr:;
- (id)calculateCurrentTimeZoneDateFormatString;
- (void)showRecognitionBubbleForView:bubbleTitle:bubbleTipHint:completion:;
- (void)showRecognitionPropHintBubble:forView:center:completion:;
- (BOOL)anyBubbleIsShowing;
- (id)duetWithPropBubble;
- (void)setDuetWithPropBubble:;
- (id)showMomentGuideAnimationCompletion;
- (void)setAlbumNewContentBubbleView:;
- (void)setAlbumNewContentBubbleImageView:;
- (void)setAlbumNewContentBubbleLabel:;
- (void)setAlbumNewContentBubble:;
- (id)showingAssetModel;
- (void)setShowingAssetModel:;
- (id)albumNewContentBubbleType;
- (void)setAlbumNewContentBubbleType:;
- (void)clearAll;
- (void).cxx_destruct;
- (void)setTrackInfo:;
- (id)trackInfo;
- (void)dismissWithOptions:;
+ (id)shareInstance;
@end
