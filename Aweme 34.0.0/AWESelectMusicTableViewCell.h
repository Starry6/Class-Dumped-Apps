@interface AWESelectMusicTableViewCell : UITableViewCell
@property (nonatomic) UIView accessibilityContainerView;
@property (nonatomic) UIImageView logoView;
@property (nonatomic) UIImageView playView;
@property (nonatomic) LOTAnimationView wavePlayView;
@property (nonatomic) AWEBillboardLabel nameLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel durationLabel;
@property (nonatomic) UILabel videoLabel;
@property (nonatomic) AWECollectionButton collectionBtn;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) BOOL favorite;
@property (nonatomic) <MusicService> musicService;
@property (nonatomic) Q musicBillboardType;
@property (nonatomic) Q subtitleType;
@property (nonatomic) @? titleClickBlock;
@property (nonatomic) @? collectionBtnClickBlock;
@property (nonatomic) @? arrowImageViewClickBlock;
@property (nonatomic) @? rankViewClickBlock;
@property (nonatomic) @? confirmBtnClickBlock;
@property (nonatomic) BOOL appear;
@property (nonatomic) AWEMediaModel mediaModel;
@property (nonatomic) q playerStatus;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) double topInset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)musicService:playStatusChanged:;
- (void)setAppear:;
- (unsigned long long)musicBillboardType;
- (void)setMusicBillboardType:;
- (void)setSubtitleType:;
- (void)confirmBtnClicked:;
- (id)musicService;
- (void)setMusicService:;
- (id)mediaModel;
- (void)setMediaModel:;
- (void)handleFavoriteStatusChangedNotification:;
- (id)accessibilityContainerView;
- (id)collectionBtn;
- (void)configWithMediaModel:isMixed:;
- (void)configWithCollectionSelected:;
- (void)collectionBtnClicked_IMP:;
- (id)collectionBtnClickBlock;
- (void)collectionBtnClicked:;
- (void)configWithMediaModel:;
- (void)setCollectionBtnClickBlock:;
- (void)setAccessibilityContainerView:;
- (void)setCollectionBtn:;
- (id)initOSTTypeWithStyle:reuseIdentifier:musicService:;
- (void)configWithNewPlayerStatus:;
- (void)setArrowImageViewClickBlock:;
- (void)setRankViewClickBlock:;
- (void)setTitleClickBlock:;
- (void)setConfirmBtnClickBlock:;
- (void)arrowImageViewClicked;
- (id)wavePlayView;
- (id)videoLabel;
- (void)_setCollectionButtonAccessibilityLabel;
- (id)_decoratedImageFor:scale:;
- (void)goToBillboardWithEID:;
- (BOOL)needShowTime;
- (id)userCountFormatStringWithMediaModel:;
- (id)rankViewClickBlock;
- (void)configAccessibilityWithPlayStatus:;
- (id)arrowImageViewClickBlock;
- (id)confirmBtnClickBlock;
- (void)resetRightButtonsFrame:;
- (void)resetLeftTitlesFrame;
- (id)titleClickBlock;
- (BOOL)needShowVideoTag;
- (void)setWavePlayView:;
- (void)setVideoLabel:;
- (BOOL)favorite;
- (double)topInset;
- (id)titleColor;
- (void)_startAnimation;
- (void)dealloc;
- (void)setTopInset:;
- (void)setTitleColor:;
- (void)setFavorite:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_stopAnimation;
- (BOOL)appear;
- (void)setNameLabel:;
- (unsigned long long)subtitleType;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)durationLabel;
- (void)setDurationLabel:;
- (id)logoView;
- (long long)playerStatus;
- (void)setPlayerStatus:;
- (id)playView;
- (void)setPlayView:;
- (void)setLogoView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)logoH;
+ (double)recommendHeight;
+ (double)kPaddingT;
+ (double)kItemW;
+ (double)logoW;
+ (double)kWaveW;
+ (id)_roundRectPath;
+ (double)kExtraH;
+ (double)kExtraW;
+ (id)identifier;
+ (id)_defaultImage;
@end
