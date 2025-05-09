@interface AWEIMShareLongVideoCardView : UIView
@property (nonatomic) UIImageView maskImageView;
@property (nonatomic) BOOL isVideoTagLabelAtUpperLeft;
@property (nonatomic) BOOL isVideoTagLabelShowing;
@property (nonatomic) BOOL isEpisodeTypeLabelAtUpperLeft;
@property (nonatomic) AWEIMInsetsLabel videoTagLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) UILabel episodeSeqLabel;
@property (nonatomic) AWEIMInsetsLabel episodeTypeLabel;
@property (nonatomic) UILabel episodeTagLabel;
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) AWEIMRefreshImageView coverImageView;
@property (nonatomic) UIButton startTimeDescButton;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)addSubviews;
- (id)playIcon;
- (void)setPlayIcon:;
- (id)videoTagLabel;
- (id)hintLabelStringWithTime:;
- (void)setVideoTagLabel:;
- (id)startTimeDescButton;
- (void)setStartTimeDescButton:;
- (id)episodeSeqLabel;
- (id)episodeTypeLabel;
- (id)episodeTagLabel;
- (void)makeMaskViewLayout;
- (void)makeVideoTagLayout;
- (void)makeEpisodeTypeLabelLayout;
- (void)makeStartTimeDescButtonLayout;
- (void)makeEpisodeTagLabelLayout;
- (void)makeEpisodeSeqLabelLayout;
- (BOOL)enableLongVideoCardOpt;
- (void)setIsVideoTagLabelAtUpperLeft:;
- (void)setIsEpisodeTypeLabelAtUpperLeft:;
- (id)tagBackgroudColor:;
- (id)tagTextColor:;
- (void)updateVideoTagLabel:title:score:episodeSeq:episodeType:categoryString:;
- (void)showStartTimeDescButtonIfNeedWithTimestamp:;
- (void)setIsVideoTagLabelShowing:;
- (void)updateLongCategoryLabelWithString:;
- (BOOL)isVideoTagLabelAtUpperLeft;
- (BOOL)isVideoTagLabelShowing;
- (BOOL)isEpisodeTypeLabelAtUpperLeft;
- (void)setEpisodeSeqLabel:;
- (void)setEpisodeTypeLabel:;
- (void)setEpisodeTagLabel:;
- (id)init;
- (id)maskImageView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)addConstraints;
- (void)updateWithModel:;
- (id)scoreLabel;
- (void)setScoreLabel:;
- (void)setMaskImageView:;
+ (id)sizeForView;
@end
