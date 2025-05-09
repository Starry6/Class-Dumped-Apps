@interface AWEIMSimilarEmojiDisplayView : UIView
@property (nonatomic) BDImageView emoticonPreview;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton addEmoticonButton;
@property (nonatomic) UIButton viewOrAddBtn;
@property (nonatomic) UIButton openSubscribeButton;
@property (nonatomic) UITapGestureRecognizer titleTapGes;
@property (nonatomic) MASConstraint addEmoticonLeftConstraint;
@property (nonatomic) MASConstraint addButtonTopConstraint;
@property (nonatomic) MASConstraint emoticonPreviewTopConstraint;
@property (nonatomic) NSNumber emojiID;
@property (nonatomic) NSString authorID;
@property (nonatomic) Q currentStickerType;
@property (nonatomic) BOOL didFetchSubscribeData;
@property (nonatomic) BOOL currentEmojiDeleted;
@property (nonatomic) <AWEIMQuickLookCollectionViewCellEventProtocol> delegate;
- (void)stopAnimationIfNeed;
- (id)emojiID;
- (void)renderWithDisplayModel:context:;
- (void)addQuickLookViewLayout;
- (void)setEmoticonPreview:;
- (id)emoticonPreview;
- (void)didTapTitleLabel:;
- (void)setTitleTapGes:;
- (id)titleTapGes;
- (void)setAddEmoticonButton:;
- (id)addEmoticonButton;
- (void)setViewOrAddBtn:;
- (id)viewOrAddBtn;
- (void)setOpenSubscribeButton:;
- (id)openSubscribeButton;
- (void)setEmoticonPreviewTopConstraint:;
- (void)setAddEmoticonLeftConstraint:;
- (void)configDataWithDisplayModel:context:;
- (void)updateActionButtonConstraint;
- (void)setCurrentStickerType:;
- (BOOL)didFetchSubscribeData;
- (void)setDidFetchSubscribeData:;
- (void)setCurrentEmojiDeleted:;
- (void)trackSubscribeShowWithType:isCurrentVIP:;
- (void)setEmojiID:;
- (void)fetchSubscribeInfoWithDisplayModel:Completion:;
- (BOOL)currentEmojiDeleted;
- (id)addEmoticonLeftConstraint;
- (unsigned long long)currentStickerType;
- (id)emoticonPreviewTopConstraint;
- (void)clearImage;
- (id)init;
- (id)delegate;
- (void)didTapButton:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupView;
- (void)didTapDown:;
- (id)addButtonTopConstraint;
- (void)setAddButtonTopConstraint:;
- (id)authorID;
- (void)setAuthorID:;
@end
