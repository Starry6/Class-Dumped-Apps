@interface AWEIMSimilarEmoticonDisplayQuickViewDelegate : NSObject
@property (nonatomic) UIImageView subscribeEmojiView;
@property (nonatomic) BOOL hasTrackedEmojiFromVideoShow;
@property (nonatomic) <AWEIMEmoticonDisplayViewControllerConfigProtocol> context;
@property (nonatomic) AWEIMEmoticonDisplayViewQuickPreviewDelegate previewDelegate;
@property (nonatomic) <AWEIMSimilarEmoticonDisplayQuickViewDelegateResultProtocol> delegate;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSendSimilarEmoticonWithModel:inTheme:;
- (void)didAddCustomSimilarEmoticonWithModel:inTheme:;
- (id)didLongPressEmoticonDisplayView:;
- (void)didSelectPreviewEmoticonWithIndexPath:;
- (void)dismissQuickPanelView;
- (void)trackEmojiFromVideoShowIfNeeded;
- (void)didTapQuickLookView:tapButton:tapType:;
- (void)didTapQuickLookTitleLabel:tapType:;
- (BOOL)hasTrackedEmojiFromVideoShow;
- (void)setHasTrackedEmojiFromVideoShow:;
- (void)actionWithTapType:;
- (void)dismissHalfScreenContainerViewControllerWithBlock:;
- (void)addToMyFavoriteEmotionWithEmoticonModel:enterMethod:;
- (void)checkEmoticonSeries;
- (void)createOrViewVirtualAvatar;
- (void)shareCurrentEmoticonAndRequireLogin;
- (void)shareCurrentEmoticon;
- (void)trackSubscribeButtonClickWithType:isCurrentVIP:;
- (void)setSubscribeEmojiView:;
- (id)subscribeEmojiView;
- (void)executeAddStickerWithEmoticonModel:enterMethod:;
- (long long)currentContainerType;
- (BOOL)isExistEmoticon;
- (id)collectionView;
- (id)delegate;
- (void)setCollectionView:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (void)setPreviewDelegate:;
- (id)previewDelegate;
@end
