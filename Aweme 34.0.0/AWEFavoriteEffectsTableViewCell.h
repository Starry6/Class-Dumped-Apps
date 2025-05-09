@interface AWEFavoriteEffectsTableViewCell : UITableViewCell
@property (nonatomic) q index;
@property (nonatomic) UIView infoContainerView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView coverContentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel userCountLabel;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UIImageView shootImageView;
@property (nonatomic) UIButton shootButton;
@property (nonatomic) UILabel officialSymbolLabel;
@property (nonatomic) UILabel effectInfoLabel;
@property (nonatomic) UIStackView effectStackView;
@property (nonatomic) UIStackView effectOfficialStackView;
@property (nonatomic) UIView effectOfficialStackWhiteSpaceView;
@property (nonatomic) AWENewFaceStickerModel stickerModel;
@property (nonatomic) UIView customAccessibilityView;
@property (nonatomic) UIView customAccessibilityRightView;
@property (nonatomic) UIView topContentView;
@property (nonatomic) @? enterEffectDetailBlock;
@property (nonatomic) @? beginShootBlock;
@property (nonatomic) UILabel originalSymbolLabel;
- (void)p_setupUI;
- (id)stickerModel;
- (void)setStickerModel:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)shootButton;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (id)userCountLabel;
- (void)setUserCountLabel:;
- (void)setShootButton:;
- (id)infoContainerView;
- (void)setInfoContainerView:;
- (void)setTopContentView:;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (void)enterDetail:;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (id)coverContentView;
- (id)officialSymbolLabel;
- (id)beginShootBlock;
- (void)updateOfficialSymbolLabel:;
- (BOOL)p_shouldShowOfficialSymbol:;
- (id)enterEffectDetailBlock;
- (void)setEnterEffectDetailBlock:;
- (void)setBeginShootBlock:;
- (void)setCoverContentView:;
- (void)setOfficialSymbolLabel:;
- (id)shootImageView;
- (void)setShootImageView:;
- (id)customAccessibilityView;
- (id)p_standardAuthorName:;
- (id)effectInfoLabel;
- (id)originalSymbolLabel;
- (BOOL)p_shouldShowOriginalSymbol:;
- (void)updateOriginalSymbolLabel:;
- (id)customAccessibilityRightView;
- (void)p_setupNewProfileUI;
- (void)p_setupDefaultUI;
- (id)effectStackView;
- (id)effectOfficialStackView;
- (id)effectOfficialStackWhiteSpaceView;
- (id)authorNameLabelTextColor;
- (void)beginShoot:;
- (void)configOriginalSymbolLabel:;
- (void)beginShoot_IMP:;
- (id)originalSymbolText;
- (void)updateWithModel:index:;
- (void)setOriginalSymbolLabel:;
- (void)setEffectInfoLabel:;
- (void)setEffectStackView:;
- (void)setEffectOfficialStackView:;
- (void)setEffectOfficialStackWhiteSpaceView:;
- (void)setCustomAccessibilityView:;
- (void)setCustomAccessibilityRightView:;
- (void)setIndex:;
- (long long)index;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)topContentView;
+ (long long)contentButtonMargin;
+ (BOOL)shouldSetTitleMediumWeight;
+ (long long)leftMargin;
+ (id)identifier;
+ (double)cellHeight;
@end
